# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "A tool for managing print jobs and printers"
SUMMARY = "A tool for managing print jobs and printers"
HOMEPAGE = "https://invent.kde.org/utilities/print-manager/"
LICENSE = "BSD-3-Clause & GPL-2.0-Or-Later & LGPL-2.0-Or-Later & LGPL-2.1-Only & LGPL-3.0-only & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit ki18n
inherit kconfig
inherit kcoreaddons
inherit kcmutils 
inherit reuse_license_checksums

DEPENDS = " \
    cups \
    kio \
    cups \
    plasma-framework \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/plasma/plasmoids/ \
    ${libdir}/qml/org/kde/plasma/printmanager/ \
    ${libdir}/libkcupslib.so \
"
FILES:${PN}-dev = ""