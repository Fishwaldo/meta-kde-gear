# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "User-friendly and fully-featured IRC client"
SUMMARY = "User-friendly and fully-featured IRC client"
HOMEPAGE = "https://invent.kde.org/network/konversation"
LICENSE = " BSD-3-Clause & GFDL-1.2-or-later & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-only & LGPL-2.0-or-later & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    karchive \
    kbookmarks \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kidletime \
    kio \
    kitemviews \
    knewstuff \
    knotifications \
    knotifyconfig \
    kparts \
    kwallet \
    kwidgetsaddons \
    kwindowsystem \
    kglobalaccel \
    qtmultimedia \
"

RDEPENDS:${PN} += " \
    perl \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

