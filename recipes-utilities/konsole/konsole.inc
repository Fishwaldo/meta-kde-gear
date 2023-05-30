# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Terminal emulator by KDE"
SUMMARY = "Terminal emulator by KDE"
HOMEPAGE = "https://invent.kde.org/utilities/konsole"
LICENSE = " CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-only & LGPL-2.1-only & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL & MIT"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kbookmarks \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kguiaddons \
    kiconthemes \
    kio \
    knewstuff \
    knotifications \
    knotifyconfig \
    kparts \
    kservice \
    ktextwidgets \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    kglobalaccel \
    kpty \
    qtmultimedia \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kglobalaccel \
    ${datadir}/kio/servicemenus \
    ${datadir}/zsh/site-functions \
"
