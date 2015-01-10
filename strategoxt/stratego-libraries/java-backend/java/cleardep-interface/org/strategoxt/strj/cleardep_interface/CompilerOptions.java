package org.strategoxt.strj.cleardep_interface;

import java.io.Serializable;
import java.util.HashMap;

import org.spoofax.interpreter.terms.IStrategoTerm;

public class CompilerOptions implements Serializable{
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 3690590660976756704L;
	
	private HashMap<String, String> options = new HashMap<String, String>();
	
	public void setOption(String key, String value) {
		options.put(key, value);
	}
	
	public void setOption(String key, IStrategoTerm value) {
		this.setOption(key, value.toString());
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((options == null) ? 0 : options.hashCode());
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		CompilerOptions other = (CompilerOptions) obj;
		if (options == null) {
			if (other.options != null)
				return false;
		} else if (!options.equals(other.options))
			return false;
		return true;
	}
	
	

}
