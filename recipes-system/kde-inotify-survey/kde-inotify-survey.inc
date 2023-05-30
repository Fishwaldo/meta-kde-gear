# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Tooling for monitoring inotify limits and informing the user when they have been or about to be reached."
SUMMARY = "Tooling for monitoring inotify limits and informing the user when they have been or about to be reached."
HOMEPAGE = "https://invent.kde.org/system/kde-inotify-survey"
LICENSE = " BSD-3-Clause & CC0-1.0 & FSFAP & GPL-2.0-only & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kauth
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcodecs \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kdeclarative \
    kidletime \
    kio \
    kjobwidgets \
    knotifications \
    kservice \
    kwallet \
    kwidgetsaddons \
    kwindowsystem \
    solid \
    syntax-highlighting \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

