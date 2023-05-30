# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library for parsing and evaluating OSM opening hours expressions."
SUMMARY = "Library for parsing and evaluating OSM opening hours expressions."
HOMEPAGE = "https://invent.kde.org/libraries/kopeninghours"
LICENSE = " BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kholidays \
    bison-native \
    boost \
"

FILES:${PN} += " \
    ${libdir}/qml/org/kde/kopeninghours/ \
    ${libdir}/python*/site-packages/PyKOpeningHours/ \
"