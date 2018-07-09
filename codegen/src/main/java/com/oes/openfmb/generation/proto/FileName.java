package com.oes.openfmb.generation.proto;

public class FileName {

    public final String baseName;

    public FileName(String baseName) {
        this.baseName = baseName;
    }

    public String getHeader()
    {
        return baseName + ".h";
    }

    public String getImplementation()
    {
        return baseName + ".cpp";
    }
}
