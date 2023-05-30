# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Interactive Geometry"
SUMMARY = "Interactive Geometry"
HOMEPAGE = "https://invent.kde.org/education/kig"
LICENSE = " BSD-3-Clause & GFDL-1.2-or-later & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.1-or-later & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg 


DEPENDS = " \
    karchive \
    kconfigwidgets \
    kcrash \
    kiconthemes \
    kparts \
    ktexteditor \
    kxmlgui \
    boost \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/katepart5/syntax \
"