package com.oes.openfmb.generation.enumeration;

import com.oes.openfmb.generation.document.CppFile;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.FileHeader;
import com.oes.openfmb.generation.document.FileName;

import java.util.Collections;
import java.util.List;

import static com.oes.openfmb.generation.document.Document.*;

public class EnumFiles implements CppFileCollection {

    private final Enumeration enumeration;
    private final FileName name;


    public EnumFiles(Enumeration enumeration) {
        this.enumeration = enumeration;
        this.name = new FileName(enumeration.name);
    }

    @Override
    public List<CppFile> headers() {
        return name.createHeaderList(
                () -> join(
                        FileHeader.lines,
                        guards(
                             enumeration.name,
                             line("enum class %s", enumeration.name).bracket(
                                     join(enumeration.values.stream().map(v -> line(v+",")))
                             )
                        )
                )
        );
    }

    @Override
    public List<CppFile> implementations() {
        return Collections.emptyList();
    }
}
