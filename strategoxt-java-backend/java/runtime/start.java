import org.spoofax.interpreter.terms.IStrategoTerm;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.MissingStrategyException;
import org.strategoxt.lang.StrategoExit;

/**
 * A helper class to invoke strategies using the command-line interface
 * (example usage: java -cp strategoxt.jar start org.strategoxt.strj.main).
 * 
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class start {
	public static void main(String[] strategyArgs) {
		String strategy = strategyArgs[0];
		String[] args = new String[strategyArgs.length - 1];
		System.arraycopy(strategyArgs, 1, args, 0, args.length);
		try {
			Context context = new Context();
			IStrategoTerm result;
			try {
				result = context.invokeStrategyCLI(strategy, strategy, args);
			} finally {
				context.getIOAgent().closeAllFiles();
			}
			if (result == null) {
				System.err.println(strategy + (context.getTraceDepth() != 0
								? ": rewriting failed, trace:"
								: ": rewriting failed"));
				context.printStackTrace();
				System.exit(1);
			} else {
				System.out.println(result);
				System.exit(0);
			}
		} catch (MissingStrategyException e) {
			e.printStackTrace();
			System.exit(127);
		} catch (StrategoExit e) {
			System.exit(e.getValue());
		}
	}
}
