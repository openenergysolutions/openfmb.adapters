package com.oes.openfmb.generation.dds.rti;

import com.google.protobuf.Descriptors;
import com.oes.openfmb.generation.Includes;
import com.oes.openfmb.generation.document.CppFile;
import com.oes.openfmb.generation.document.CppFileCollection;
import com.oes.openfmb.generation.document.Document;
import com.oes.openfmb.generation.document.FileHeader;

import java.util.Collections;
import java.util.List;
import java.util.Set;

import static com.oes.openfmb.generation.document.Document.*;

public class PublisherFactory implements CppFileCollection {

    private final List<Descriptors.Descriptor> profiles;

    PublisherFactory(List<Descriptors.Descriptor> profiles) {
        this.profiles = profiles;
    }

    @Override
    public List<CppFile> headers() {
        return Collections.singletonList(
                new CppFile(
                        "PublisherFactory.h",
                        () -> join(
                                FileHeader.lines,
                                guards("PublisherFactory",
                                        headerIncludes(),
                                        space,
                                        namespace("adapter",
                                                namespace("dds",
                                                        namespace("rti",
                                                                template(),
                                                                space,
                                                                methods()
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
            include("DDSPublisher.h"),
            include("generated/TopicRepository.h"),
            include("adapter-util/config/SubjectNameSuffix.h"),
            join(Includes.getIncludeFiles(this.profiles).stream().map(Document::include)),
            include("OpenFMB-IDL.hpp")
        );
    }

    private Document template()
    {
        return lines(
                "template<typename T>",
                "struct PublisherFactory;"
        );
    }

    private Document methods()
    {
        return spaced(
                this.profiles.stream().map(this::method)
        );
    }

    private Document method(Descriptors.Descriptor profile)
    {
        return line("template<>")
                .then(String.format("struct PublisherFactory<%s>", RtiHelpers.getProtoName(profile)))
                .bracketSemicolon(
                    line(String.format("static std::shared_ptr<api::ISubscriptionHandler<%s>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)", RtiHelpers.getProtoName(profile)))
                    .bracket(
                            line(String.format("return std::make_shared<DDSPublisher<%s, %s>>(logger, subject, dds_publisher, topic_repo.%s);", RtiHelpers.getProtoName(profile), RtiHelpers.getDDSName(profile), profile.getName().toLowerCase()))
                    )
                );
    }

    @Override
    public List<CppFile> implementations() {
        return Collections.emptyList();
    }
}
