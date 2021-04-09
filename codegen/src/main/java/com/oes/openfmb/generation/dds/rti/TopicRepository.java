// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.dds.rti;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.document.CppFile;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.FileHeader;

import java.util.*;
import java.util.stream.Stream;

import static com.oes.openfmb.generation.document.Document.*;

public class TopicRepository implements CppFileCollection {

    private final List<Descriptors.Descriptor> profiles;

    TopicRepository(List<Descriptors.Descriptor> profiles)
    {
        this.profiles = profiles;
    }

    @Override
    public List<CppFile> headers() {
        return Collections.singletonList(
                new CppFile(
                        "TopicRepository.h",
                        () -> join(
                                FileHeader.lines,
                                guards("TopicRepository",
                                        headerIncludes(),
                                        space,
                                        namespace("adapter",
                                                namespace("dds",
                                                        namespace("rti",
                                                                header()
                                                        )
                                                )
                                        )
                                )
                        )
                )
        );
    }

    private Document headerIncludes()
    {
        return spaced(
                include("dds/dds.hpp"),
                include("OpenFMB-IDL.hpp")
        );
    }

    private Document header()
    {
        return line("struct TopicRepository")
            .bracketSemicolon(
                line("public:")
                    .then("TopicRepository(const ::dds::domain::DomainParticipant& participant);")
                    .space()
                    .then(join(this.profiles.stream().map(profile -> line(String.format("::dds::topic::Topic<%s> %s;", RtiHelpers.getDDSName(profile), getName(profile))))))
            );
    }

    @Override
    public List<CppFile> implementations()
    {
        return Collections.singletonList(
                new CppFile(
                        "TopicRepository.cpp",
                        () -> join(
                                include("generated/TopicRepository.h"),
                                space,
                                namespace("adapter",
                                        namespace("dds",
                                                namespace("rti",
                                                        constructor()
                                                )
                                        )
                                )
                        )
                )
        );
    }

    private Document constructor()
    {
        ArrayList<Document> initializations = new ArrayList<>();
        Stream<Descriptors.Descriptor> stream = this.profiles.stream();
        Iterator<Descriptors.Descriptor> it = stream.iterator();
        while (it.hasNext()) {
            Descriptors.Descriptor profile = it.next();
            String strLine = String.format("%s{participant, \"openfmb.%s\"}", getName(profile), profile.getFullName());
            if(it.hasNext()) {
                strLine += ",";
            }
            initializations.add(line(strLine));
        }
        return line("TopicRepository::TopicRepository(const ::dds::domain::DomainParticipant& participant)")
            .then(":")
            .then(join(initializations.stream()))
            .then("{}");
    }

    private String getName(Descriptors.Descriptor profile)
    {
        return profile.getName().toLowerCase();
    }
}
