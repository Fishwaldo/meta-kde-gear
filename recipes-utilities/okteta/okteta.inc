# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Hex editor for viewing and editing the raw data of files"
SUMMARY = "Hex editor for viewing and editing the raw data of files"
HOMEPAGE = "https://invent.kde.org/utilities/okteta"
LICENSE = " BSD-3-Clause & GFDL-1.2-or-later & GPL-2.0-only & GPL-3.0-only & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime


DEPENDS = " \
    kbookmarks \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kio \
    kitemviews \
    knewstuff \
    kparts \
    kservice \
    kwidgetsaddons \
    kxmlgui \
    qtscript \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} +=  " \
    ${datadir}/mime/packages \
"

