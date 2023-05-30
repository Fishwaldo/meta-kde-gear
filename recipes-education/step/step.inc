# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Interactive physics simulator"
SUMMARY = "Interactive Physical Simulator"
HOMEPAGE = "https://invent.kde.org/education/step"
LICENSE = " BSD-2-Clause & BSD-3-Clause & GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.1-only & LGPL-3.0-only & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit kconfig
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg
inherit mime

DEPENDS = " \
    kcrash \
    kiconthemes \
    kio \
    knewstuff \
    kplotting \
    ktextwidgets \
    kxmlgui \
    libeigen \
    libqalculate \
    gsl \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/mime/packages \
"