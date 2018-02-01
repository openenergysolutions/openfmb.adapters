package com.oes.openfmb.generation.document;

public abstract class CppFilePair {


    public abstract Document header();
    public abstract Document implementation();

    public String headerFileName() {
        return this.baseFileName() + ".h";
    }

    public String implementationFileName() {
        return this.baseFileName() + ".cpp";
    }

    protected abstract String baseFileName();
}
