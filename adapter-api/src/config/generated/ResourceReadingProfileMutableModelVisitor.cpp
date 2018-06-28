#include "adapter-api/config/generated/ResourceReadingProfileMutableModelVisitor.h"

#include "adapter-api/config/generated/MutableModelVisitorTemplates.h"

namespace adapter {

void visit(IMutableModelVisitor<resourcemodule::ResourceReadingProfile>& visitor)
{
    DescriptorPathImpl path;

    path.push(commonmodule::ReadingMessageInfo::descriptor());
    if(visitor.start_message_field("readingMessageInfo", path))
    {
        visit_commonmodule_ReadingMessageInfo<resourcemodule::ResourceReadingProfile>(
            [](resourcemodule::ResourceReadingProfile& profile) { return profile.mutable_readingmessageinfo(); },
            path, visitor
        );
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::IED::descriptor());
    if(visitor.start_message_field("ied", path))
    {
        visit_commonmodule_IED<resourcemodule::ResourceReadingProfile>(
            [](resourcemodule::ResourceReadingProfile& profile) { return profile.mutable_ied(); },
            path, visitor
        );
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Meter::descriptor());
    if(visitor.start_message_field("meter", path))
    {
        visit_commonmodule_Meter<resourcemodule::ResourceReadingProfile>(
            [](resourcemodule::ResourceReadingProfile& profile) { return profile.mutable_meter(); },
            path, visitor
        );
    }
    visitor.end_message_field();
    path.pop();

    path.push(resourcemodule::ResourceReading::descriptor());
    if(visitor.start_message_field("resourceReading", path))
    {
        visit_resourcemodule_ResourceReading<resourcemodule::ResourceReadingProfile>(
            [](resourcemodule::ResourceReadingProfile& profile) { return profile.mutable_resourcereading(); },
            path, visitor
        );
    }
    visitor.end_message_field();
    path.pop();
}

} // end namespace adapter
