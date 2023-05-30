# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "An educational Graph Theory IDE"
SUMMARY = "Rocs Graph Theory"
HOMEPAGE = "https://invent.kde.org/education/rocs"
LICENSE = " BSD-2-Clause & GFDL-1.2-or-later & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.1-only & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    karchive \
    kcrash \
    kitemviews \
    ktexteditor \
    kxmlgui \
    boost \
    grantlee \
    qtscript \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

