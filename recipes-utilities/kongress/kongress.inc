# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Companion application for conferences"
SUMMARY = "KDE Conference companion application"
HOMEPAGE = "https://invent.kde.org/utilities/kongress"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC-BY-SA-4.0 & CC0-1.0 & GPL-3.0-or-later & LGPL-3.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcalendarcore \
    kirigami \
    knotifications \
    kdbusaddons \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

