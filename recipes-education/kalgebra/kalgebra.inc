# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "2D and 3D Graph Calculator"
SUMMARY = "2D and 3D Graph Calculator"
HOMEPAGE = "https://invent.kde.org/education/kalgebra"
LICENSE = "LPGL-2.0-only"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    analitza \
    kconfigwidgets \
    kio \
    kwidgetsaddons \
    qtwebengine \
"

FILES:${PN} += " \
    ${datadir}/katepart5/syntax/ \
    ${datadir}/plasma/plasmoids/org.kde.graphsplasmoid/ \
"
