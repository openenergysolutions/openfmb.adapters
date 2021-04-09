// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.dds.twinoaks;

import com.oes.openfmb.generation.Profiles;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.FileGenerator;
import com.oes.openfmb.generation.document.GeneratedFileSet;

import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.List;

public class Conversions
{
    private final static Path path = Paths.get("../plugins/dds/twinoaks/src/twinoaks/generated");

    public final static GeneratedFileSet set = new GeneratedFileSet(
            Arrays.asList(path, path),
            FileGenerator.convert(path, path, cppFilePairs())
    );

    private static List<CppFileCollection> cppFilePairs() {

        return Arrays.asList(
                new ConvertToProto(Profiles.list),
                new ConvertFromProto(Profiles.list)
        );
    }

}
