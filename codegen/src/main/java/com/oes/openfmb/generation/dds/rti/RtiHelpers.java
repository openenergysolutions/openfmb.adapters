package com.oes.openfmb.generation.dds.rti;

import com.google.protobuf.Descriptors;

class RtiHelpers {
    static String getProtoName(Descriptors.GenericDescriptor d)
    {
        return d.getFullName().replace(".", "::");
    }

    static String getDDSName(Descriptors.GenericDescriptor d)
    {
        return "openfmb::" + getProtoName(d);
    }
}
