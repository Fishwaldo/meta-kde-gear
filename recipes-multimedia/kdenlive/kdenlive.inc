# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Free and open source video editor, based on MLT Framework and KDE Frameworks 5"
SUMMARY = "Free and open source video editor, based on MLT Framework and KDE Frameworks 5"
HOMEPAGE = "https://invent.kde.org/multimedia/kdenlive"
LICENSE = " BSD-3-Clause & BSL-1.0 & CC-BY-SA-4.0 & CC0-1.0 & GPL-2.0-only & GPL-3.0-only & GPL-3.0-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg
inherit mime 

DEPENDS = " \
    breeze-icons \
    karchive \
    kbookmarks \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kdeclarative \
    kfilemetadata \
    kguiaddons \
    kiconthemes \
    kio \
    kitemviews \
    kjobwidgets \
    knewstuff \
    knotifications \
    knotifyconfig \
    kplotting \
    kservice \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
    purpose \
    qtmultimedia \
    qtnetworkauth \
    mlt \
    ffmpeg \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/mime/packages \
"