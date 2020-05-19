package org.strategoxt.lang.gradual;

import static org.spoofax.interpreter.terms.IStrategoTerm.APPL;
import static org.spoofax.interpreter.terms.IStrategoTerm.INT;
import static org.spoofax.interpreter.terms.IStrategoTerm.LIST;
import static org.spoofax.interpreter.terms.IStrategoTerm.REAL;
import static org.spoofax.interpreter.terms.IStrategoTerm.STRING;
import static org.spoofax.interpreter.terms.IStrategoTerm.TUPLE;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.terms.attachments.AbstractTermAttachment;
import org.spoofax.terms.attachments.TermAttachmentType;
import org.spoofax.terms.attachments.VolatileTermAttachmentType;
import org.spoofax.terms.util.TermUtils;

public class TypeAttachment extends AbstractTermAttachment {
    public final Type type;

    public TypeAttachment(Type type) {
        this.type = type;
    }

    @Override public TermAttachmentType<?> getAttachmentType() {
        return TypeAttachmentType.INSTANCE;
    }

    public static Type getType(IStrategoTerm current) {
        final /* @Nullable */ TypeAttachment attachment =
            current.getAttachment(TypeAttachmentType.INSTANCE);
        return attachment == null ? null : attachment.type;
    }

    public static Type getOrComputeType(TypeInfo typeInfo, IStrategoTerm current) {
        Type type = getType(current);
        if(type != null) {
            return type;
        }
        type = computeType(typeInfo, current);
        current.putAttachment(new TypeAttachment(type));
        return type;
    }

    private static Type computeType(TypeInfo typeInfo, IStrategoTerm current) {
        final List<Type> subTermTypes = new ArrayList<>(current.getSubtermCount());
        for(IStrategoTerm subTerm : current) {
            final Type subTermType = getOrComputeType(typeInfo, subTerm);
            subTermTypes.add(subTermType);
        }
        switch(current.getTermType()) {
            case INT:
                return IntT.INSTANCE;
            case REAL:
                return RealT.INSTANCE;
            case STRING:
                return StringT.INSTANCE;
            case APPL:
                final IStrategoAppl appl = TermUtils.toAppl(current);
                return typeInfo.typeOf(appl.getName(), subTermTypes);
            case LIST:
                if(subTermTypes.isEmpty()) {
                    return new Sort("List", Collections.singletonList(DynT.INSTANCE));
                }
                final Type leastUpperBound = typeInfo.leastUpperBound(subTermTypes);
                return new Sort("List", Collections.singletonList(leastUpperBound));
            case TUPLE:
                return new Sort("Tuple", subTermTypes);
            default:
                throw new StrategoTypeException(current);
        }
    }

    public static class TypeAttachmentType extends VolatileTermAttachmentType<TypeAttachment> {
        public static final TypeAttachmentType INSTANCE = new TypeAttachmentType();

        private TypeAttachmentType() {
            super(TypeAttachment.class);
        }
    }
}
