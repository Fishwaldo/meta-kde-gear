# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KIO workers useful for software development"
SUMMARY = "KIO workers useful for software development"
HOMEPAGE = "https://invent.kde.org/sdk/kdesdk-kio"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=5a3169a2d39a757efd8b7aa66a69d97b"

inherit cmake_plasma
inherit ki18n


DEPENDS = " \
    kio \
"

FILES:${PN} += " \ 
    ${datadir}/kio_perldoc \
"

RDEPENDS:${PN} += " \
    perl \
"