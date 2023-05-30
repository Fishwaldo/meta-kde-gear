# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Terminal app for Plasma Mobile"
SUMMARY = "Mobile terminal application"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/qmlkonsole"
LICENSE = " CC0-1.0 & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kirigami \
    kwindowsystem \
    kirigami-addons \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

