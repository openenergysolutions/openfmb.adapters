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

public class SubscriberFactory implements CppFileCollection {

    private final Set<Descriptors.Descriptor> profiles;

    SubscriberFactory(Set<Descriptors.Descriptor> profiles) {
        this.profiles = profiles;
    }

    @Override
    public List<CppFile> headers() {
        return Collections.singletonList(
                new CppFile(
                        "SubscriberFactory.h",
                        () -> join(
                                FileHeader.lines,
                                guards("SubscriberFactory",
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
            include("DDSSubscriber.h"),
            join(Includes.getIncludeFiles(this.profiles).stream().map(Document::include)),
            include("OpenFMB-IDL.hpp")
        );
    }

    private Document template()
    {
        return lines(
                "template<typename T>",
                "struct SubscriberFactory;"
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
                .then(String.format("struct SubscriberFactory<%s>", Helpers.getProtoName(profile)))
                .bracketSemicolon(
                    line("static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const ::dds::sub::Subscriber& dds_subscriber, api::publisher_t publisher)")
                    .bracket(lines(
                                String.format("::dds::topic::Topic<%s> topic{dds_subscriber.participant(), \"openfmb.%s\"};", Helpers.getDDSName(profile), profile.getFullName()),
                                String.format("return std::make_unique<DDSSubscriber<%s, %s>>(logger, dds_subscriber, topic, publisher);", Helpers.getProtoName(profile), Helpers.getDDSName(profile))
                            )
                    )
                );
    }

    @Override
    public List<CppFile> implementations() {
        return Collections.emptyList();
    }
}
