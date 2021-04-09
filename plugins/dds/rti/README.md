<!--
SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc

SPDX-License-Identifier: Apache-2.0
-->

# RTI DDS
To compile this plugin, you will need the following RTI DDS installed on your computer.
You can download it from here: https://www.rti.com/free-trial/dds-files#6.0.0

You will also need to set the `CONNEXTDDS_DIR` CMake variable to point to the installation
directory of RTI DDS (on Windows, it should be `C:/Program Files/rti_connext_dds-6.0.0` by default).

Depending on the architecture, you might need to set it manually with the `CONNEXTDDS_ARCH` variable
(on Windows, it should be `x64Win64VS2017`).
