/**
 * 
 */
package org.strategoxt.lang.typesmart;

import java.util.Collection;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoConstructor;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoPlaceholder;
import org.spoofax.interpreter.terms.IStrategoReal;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.AbstractTermFactory;
import org.spoofax.terms.ParseError;
import org.spoofax.terms.TermFactory;
import org.spoofax.terms.attachments.AbstractWrappedTermFactory;

/**
 * This is a variation on {@link AbstractWrappedTermFactory} which also redirects calls to methods
 * like
 * {@link TermFactory#replaceAppl(org.spoofax.interpreter.terms.IStrategoConstructor, org.spoofax.interpreter.terms.IStrategoTerm[], org.spoofax.interpreter.terms.IStrategoAppl)}
 * 
 * 
 * @author Vlad Vergu
 * 
 */
public abstract class AWrappedTermFactory extends AbstractTermFactory {

    private final ITermFactory baseFactory;

    public AWrappedTermFactory(int storageType, ITermFactory baseFactory) {
	super(storageType);
	this.baseFactory = baseFactory.getFactoryWithStorageType(storageType);
	assert checkStorageType(this.baseFactory, storageType);
    }

    protected ITermFactory getWrappedFactory() {
	return baseFactory;
    }

    public IStrategoPlaceholder makePlaceholder(IStrategoTerm template) {
	return baseFactory.makePlaceholder(template);
    }

    public IStrategoInt makeInt(int i) {
	return baseFactory.makeInt(i);
    }

    public IStrategoReal makeReal(double d) {
	return baseFactory.makeReal(d);
    }

    public IStrategoString makeString(String s) {
	return baseFactory.makeString(s);
    }

    public IStrategoTerm annotateTerm(IStrategoTerm term, IStrategoList annotations) {
	return baseFactory.annotateTerm(term, annotations);
    }

    public IStrategoString tryMakeUniqueString(String name) {
	return baseFactory.tryMakeUniqueString(name);
    }

    @Override
    public IStrategoAppl makeAppl(IStrategoConstructor constructor, IStrategoTerm[] kids,
	    IStrategoList annotations) {
	return baseFactory.makeAppl(constructor, kids, annotations);
    }

    @Override
    public IStrategoTuple makeTuple(IStrategoTerm[] kids, IStrategoList annotations) {
	return baseFactory.makeTuple(kids, annotations);
    }

    @Override
    public IStrategoList makeList(IStrategoTerm[] kids, IStrategoList annotations) {
	return baseFactory.makeList(kids, annotations);
    }

    @Override
    public IStrategoAppl replaceAppl(IStrategoConstructor constructor, IStrategoTerm[] kids,
	    IStrategoAppl old) {
	return baseFactory.replaceAppl(constructor, kids, old);
    }

    @Override
    public IStrategoTuple replaceTuple(IStrategoTerm[] kids, IStrategoTuple old) {
	return baseFactory.replaceTuple(kids, old);
    }

    @Override
    public IStrategoList replaceList(IStrategoTerm[] kids, IStrategoList old) {
	return baseFactory.replaceList(kids, old);
    }

    @Override
    public IStrategoList replaceListCons(IStrategoTerm head, IStrategoList tail,
	    IStrategoTerm oldHead, IStrategoList oldTail) {
	return baseFactory.replaceListCons(head, tail, oldHead, oldTail);
    }

    @Override
    public IStrategoTerm replaceTerm(IStrategoTerm term, IStrategoTerm old) {
	return baseFactory.replaceTerm(term, old);
    }

    @Override
    public IStrategoList makeList() {
	return baseFactory.makeList();
    }

    @Override
    public IStrategoList makeList(Collection<? extends IStrategoTerm> terms) {
	return baseFactory.makeList(terms);
    }

    @Override
    public IStrategoList makeListCons(IStrategoTerm head, IStrategoList tail, IStrategoList annos) {
	return baseFactory.makeListCons(head, tail, annos);
    }

    @Override
    public IStrategoTerm parseFromString(String text) throws ParseError {
	return baseFactory.parseFromString(text);
    }

    @Override
    public IStrategoTerm copyAttachments(IStrategoTerm from, IStrategoTerm to) {
	return baseFactory.copyAttachments(from, to);
    }

}
