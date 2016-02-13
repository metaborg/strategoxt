package org.strategoxt.lang.compat;

import java.util.HashSet;
import java.util.Set;

import org.spoofax.interpreter.core.IContext;
import org.spoofax.interpreter.core.VarScope;
import org.spoofax.interpreter.library.jsglr.JSGLRLibrary;
import org.spoofax.interpreter.library.jsglr.origin.OriginLibrary;
import org.spoofax.interpreter.library.xml.XMLLibrary;
import org.strategoxt.HybridInterpreter;
import org.strategoxt.lang.Context;
import org.strategoxt.lang.InteropSDefT;
import org.strategoxt.lang.SRTS_EXT_eq_ignore_annos_0_1;
import org.strategoxt.lang.SRTS_EXT_newint_0_0;

/**
 * Handles per-context library compatibility components.
 *
 * @author Lennart Kats <lennart add lclnet.nl>
 */
public class CompatManager {

    private final Context context;

    private static final Set<String> asyncComponents = new HashSet<String>();

    public CompatManager(Context context) {
        this.context = context;
    }

    public void init() {
        // We have to initialize the current context based on asyncComponents,
        // since registerComponent() is only called in the life cycle of the JVM
        synchronized(asyncComponents) {
            for(String component : asyncComponents) {
                activateComponent(component);
            }
        }

        // HACK: make some of the built-in strategies available to the interpreter
        IContext iContext = HybridInterpreter.getContext(context);
        if(iContext != null) {
            VarScope varScope = iContext.getVarScope();
            varScope.addSVar("SRTS_EXT_newint_0_0", new InteropSDefT(SRTS_EXT_newint_0_0.instance, iContext));
            varScope.addSVar("SRTS_EXT_eq_ignore_annos_0_1", new InteropSDefT(SRTS_EXT_eq_ignore_annos_0_1.instance,
                iContext));
        }

        // More standard registries, kind of
        context.addOperatorRegistry(new OriginLibrary());
        context.addOperatorRegistry(new XMLLibrary());
    }

    public void registerComponent(String component) {
        synchronized(asyncComponents) {
            if(asyncComponents.add(component))
                activateComponent(component);
        }
    }

    /**
     * Dynamically loads any compatibility library or operator registry associated with a Stratego library.
     */
    private void activateComponent(String component) {
        if("stratego_lib".equals(component)) {
            context.addOperatorRegistry(new CompatLibrary());
            report_failure_compat_1_0.init();
            ReadFromFile_cached_0_0.init();
        } else if("stratego_sglr".equals(component)) {
            context.addOperatorRegistry(new JSGLRLibrary());
        }
    }
}
