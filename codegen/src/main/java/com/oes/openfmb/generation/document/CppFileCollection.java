package com.oes.openfmb.generation.document;

import java.util.List;

public interface CppFileCollection {

    List<CppFile> headers();
    List<CppFile> implementations();

}
