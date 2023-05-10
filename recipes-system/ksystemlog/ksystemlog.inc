# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE SystemLog Application"
SUMMARY = "KDE SystemLog Application"
HOMEPAGE = "https://invent.kde.org/system/ksystemlog"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit kconfig
inherit kdoctools
inherit reuse_license_checksums

DEPENDS = " \
    kxmlgui \
    kwidgetsaddons \
    kitemviews \
    kio \
    karchive \
    kcompletion \
    ktextwidgets \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

