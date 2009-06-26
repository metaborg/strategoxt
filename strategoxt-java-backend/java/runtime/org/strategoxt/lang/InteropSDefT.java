package org.strategoxt.lang;

import java.util.Arrays;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.InterpreterException;
import org.spoofax.interpreter.core.VarScope;
import org.spoofax.interpreter.stratego.SDefT;
import org.spoofax.interpreter.terms.IStrategoTerm;

/**
 * Adapts an {@link SDefT} definition to a {@link Strategy},
 * making interpreter strategy arguments accessible to the compiled strategies.
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class InteropSDefT extends DynamicStrategy {
	
	private final SDefT definition;
	
	private final IContext context;
	
	public InteropSDefT(SDefT definition, IContext context) {
		this.definition = definition;
		this.context = context;
	}
	
	public static Strategy[] toInteropSDefTs(SDefT[] definitions, IContext context) {
		Strategy[] results = new Strategy[definitions.length];
		for (int i = 0; i < definitions.length; i++) {
			SDefT definition = definitions[i];
			if (definition instanceof InteropStrategyDef) {
				results[i] = ((InteropStrategyDef) definition).getStrategy();
			} else {
				results[i] = new InteropSDefT(definitions[i], context);
			}
		}
		return results;
	}
	
	@Override
	public IStrategoTerm invokeDynamic(Context compilerContext, IStrategoTerm current, Strategy[] sargs, IStrategoTerm[] targs) {
		VarScope oldScope = context.getVarScope();
		try {
			if (sargs.length != 0 || targs.length != 0) {
				VarScope newScope = new VarScope(oldScope);
				assignParameters(compilerContext, newScope, sargs, targs);
				context.setVarScope(newScope);
			}
			
			context.setCurrent(current);
			boolean success = definition.evaluate(context);
			return success ? context.current() : null;
		} catch (InterpreterException e) {
			throw new StrategoException("Exception in interpreter", e);
		} finally {
			context.restoreVarScope(oldScope);
		}
	}

	private void assignParameters(Context compiledContext, VarScope scope, Strategy[] sargs, IStrategoTerm[] targs)
			throws InterpreterException {
		
		SDefT.SVar[] sparams = definition.getStrategyParams();
		String[] tparams = definition.getTermParams();
		SDefT[] sargs2 = InteropStrategyDef.toInteropStrategyDefs(sargs, context, compiledContext);
		if (sparams.length != sargs.length || tparams.length != targs.length) {
			throw new InterpreterException("Illegal number of arguments passed to strategy "
					+ getName() + ": (" + Arrays.toString(sargs) + "|" + Arrays.toString(targs) + ")");
		}
		
		for (int i = 0; i < sparams.length; i++) {
			scope.addSVar(sparams[i].name, sargs2[i]);
		}
		
		for (int i = 0; i < tparams.length; i++) {
			scope.add(tparams[i], targs[i]);
		}
	}
	
	@Override
	public String getName() {
		return definition.getName();
	}
	
	public SDefT getDefinition() {
		return definition;
	}
}
