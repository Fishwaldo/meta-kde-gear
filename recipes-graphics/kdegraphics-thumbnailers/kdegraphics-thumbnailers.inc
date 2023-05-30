# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Thumbnailers for various graphics file formats"
SUMMARY = "Thumbnailers for various graphics file formats"
HOMEPAGE = "https://invent.kde.org/graphics/kdegraphics-thumbnailers"
LICENSE = "LGPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=751419260aa954499f7abaabaa882bbe"

inherit cmake_plasma


DEPENDS = " \
    karchive \
    kio \
    kdegraphics-mobipocket \
    libkdcraw \
    libkexiv2 \
"
