#!/bin/sh

# SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
#
# SPDX-License-Identifier: Apache-2.0

find . -name "*.cpp" | xargs reuse addheader -l Apache-2.0 -y 2021 -c "Open Energy Solutions Inc" --copyright-style spdx
find . -name "*.h" | xargs reuse addheader -l Apache-2.0 -y 2021 -c "Open Energy Solutions Inc" --copyright-style spdx
find . -name "*.java" | xargs reuse addheader -l Apache-2.0 -y 2021 -c "Open Energy Solutions Inc" --copyright-style spdx

