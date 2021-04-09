// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

package com.oes.openfmb.generation.document;

import java.util.List;

public interface CppFileCollection {

    List<CppFile> headers();
    List<CppFile> implementations();

}
