# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Kirigami component gallery application"
SUMMARY = "Kirigami component gallery application"
HOMEPAGE = "https://invent.kde.org/sdk/kirigami-gallery"
LICENSE = "LGPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSE.LGPL-2;md5=5f30f0716dfdd0d91eb439ebec522ec2"

inherit cmake_plasma

DEPENDS = " \
    kirigami \
    kitemmodels \
"

