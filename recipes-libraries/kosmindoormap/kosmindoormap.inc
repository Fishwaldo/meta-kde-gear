# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "OSM multi-floor indoor map renderer"
SUMMARY = "OSM multi-floor indoor map renderer"
HOMEPAGE = "https://invent.kde.org/libraries/kosmindoormap"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC0-1.0 & LGPL-2.0-or-later & LGPL-3.0-or-later & MIT & ODbL-1.0"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    kopeninghours \
    kpublictransport \
    bison-native \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/qml/org/kde/kosmindoormap/ \
"