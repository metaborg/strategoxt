package org.strategoxt.strj.pluto_interface;

import org.spoofax.interpreter.library.AbstractStrategoOperatorRegistry;
import org.strategoxt.strj.pluto_interface.builder.Provide;
import org.strategoxt.strj.pluto_interface.builder.Require;
import org.strategoxt.strj.pluto_interface.builder.RequireBuild;
import org.strategoxt.strj.pluto_interface.builder.RequireStamper;
import org.strategoxt.strj.pluto_interface.buildmanager.RequireInitially;
import org.strategoxt.strj.pluto_interface.stamper.CreateStamper;

public class PlutoLibrary extends AbstractStrategoOperatorRegistry{

	public PlutoLibrary() {
		this.add(new MakeBuilderFactory());
		this.add(new MakeBuildCycleAtOnceBuilderFactory());
		this.add(new Provide());
		this.add(new Require());
		this.add(new RequireStamper());
		this.add(new RequireBuild());
		this.add(new RequireInitially());
		this.add(new InitBuilderFactoryStore());
		this.add(new CreateStamper());
	}
	
	@Override
	public String getOperatorRegistryName() {
		return "PlutoStartegoInterface";
	}

}
