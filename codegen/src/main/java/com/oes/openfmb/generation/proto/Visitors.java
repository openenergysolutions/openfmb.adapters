// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.proto;

import com.oes.openfmb.generation.Profiles;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.FileGenerator;
import com.oes.openfmb.generation.document.GeneratedFileSet;

import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.List;

public class Visitors
{
    private final static Path implDir = Paths.get("../adapter-util/src/config/generated");
    private final static Path includeDir = Paths.get("../adapter-util/include/adapter-util/config/generated");

    public final static GeneratedFileSet set = new GeneratedFileSet(
            Arrays.asList(implDir, includeDir),
            FileGenerator.convert(includeDir, implDir, cppFilePairs())
    );

    private static List<CppFileCollection> cppFilePairs() {

        return Arrays.asList(
                MessageVisitorFiles.from(Profiles.list),
                ModelVisitorFiles.from(Profiles.list),
                TypedModelVisitorFiles.from(Profiles.list)
        );
    }

}
