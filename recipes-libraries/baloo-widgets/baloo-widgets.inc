# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Widgets for Baloo"
SUMMARY = "Widgets for Baloo"
HOMEPAGE = "https://invent.kde.org/libraries/baloo-widgets"
LICENSE = "GPL-2.0-only & GPL-3.0-only & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit ki18n
inherit kdoctools
inherit reuse_license_checksums

DEPENDS = " \
    baloo \
    kio \
    kservice \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"