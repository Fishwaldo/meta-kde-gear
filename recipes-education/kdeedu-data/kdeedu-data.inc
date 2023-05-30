# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Shared icons, artwork and data files for educational applications"
SUMMARY = "Shared icons, artwork and data files for educational applications"
HOMEPAGE = "https://invent.kde.org/education/kdeedu-data"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"


inherit cmake_plasma


DEPENDS = " \
"


FILES:${PN} += " \ 
    ${datadir}/apps/kvtml \
"