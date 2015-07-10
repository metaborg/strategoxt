package org.strategoxt.strj.pluto_interface;

import java.io.IOException;
import java.io.Serializable;

import build.pluto.builder.BuildRequest;
import build.pluto.builder.Builder;
import build.pluto.builder.BuilderFactory;
import build.pluto.output.Output;

public interface PublicBuilder {
	
	public <In_ extends Serializable, Out_ extends Output, B_ extends Builder<In_, Out_>, F_ extends BuilderFactory<In_, Out_, B_>> Out_ requireBuild(
			BuildRequest<In_, Out_, B_, F_> req) throws IOException;

}