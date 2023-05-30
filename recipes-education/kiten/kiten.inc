# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Japanese Reference/Study Tool"
SUMMARY = "Japanese Reference and Study Tool"
HOMEPAGE = "https://invent.kde.org/education/kiten"
LICENSE = " BSD-3-Clause & GPL-1.0-or-later & GPL-2.0-or-later & LGPL-2.0-or-later & LicenseRef-EDRDG"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    karchive \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kio \
    knotifications \
    kxmlgui \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/fonts/kanjistrokeorders \
"