package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;
import org.strategoxt.strj.pluto_interface.builder.Provide;
import org.strategoxt.strj.pluto_interface.builder.ProvideFor;
import org.strategoxt.strj.pluto_interface.builder.Require;
import org.strategoxt.strj.pluto_interface.builder.RequireBuild;
import org.strategoxt.strj.pluto_interface.builder.RequireBuildStamper;
import org.strategoxt.strj.pluto_interface.builder.RequireStamper;
import org.strategoxt.strj.pluto_interface.buildmanager.RequireInitially;
import org.strategoxt.strj.pluto_interface.stamper.CreateOutputStamper;
import org.strategoxt.strj.pluto_interface.stamper.CreateStamper;
import org.strategoxt.strj.pluto_interface.util.Unify_and_sort_Constructors;
import org.strategoxt.strj.pluto_interface.util.Unify_and_sort_Overlays;
import org.strategoxt.strj.pluto_interface.util.Unify_and_sort_Signatures;

/**
 * DONT rename or move this class, because the ant scripts checks whether this class is available to check whether separate compilation is supported by the current compiler
 * @author moritzlichter
 *
 */
public class PlutoLibrary extends AbstractStrategoOperatorRegistry{

	public PlutoLibrary() {
		this.add(new MakeBuilderFactory());
		this.add(new MakeBuildCycleAtOnceBuilderFactory());
		this.add(new Provide());
		this.add(new ProvideFor());
		this.add(new Require());
		this.add(new RequireStamper());
		this.add(new RequireBuild());
		this.add(new RequireBuildStamper());
		this.add(new RequireInitially());
		this.add(new InitBuilderFactoryStore());
		this.add(new CreateStamper());
		this.add(new CreateOutputStamper());
		this.add(new Unify_and_sort_Constructors());
		this.add(new Unify_and_sort_Overlays());
		this.add(new Unify_and_sort_Signatures());
	}
	
	@Override
	public String getOperatorRegistryName() {
		return "PlutoStartegoInterface";
	}

}
