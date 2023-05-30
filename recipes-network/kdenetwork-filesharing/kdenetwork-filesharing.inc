# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Samba file sharing plugin for file properties"
SUMMARY = "Samba file sharing plugin for file properties"
HOMEPAGE = "https://invent.kde.org/network/kdenetwork-filesharing"
LICENSE = " BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.1-only & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL & MIT"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcompletion \
    kio \
    kwidgetsaddons \
    packagekit-qt \
    qcoro \
"

EXTRA_OECMAKE += "-DCMAKE_CXX_FLAGS=-latomic"

RDEPENDS:${PN} += " \
    samba \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

