# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Calendar for Plasma Mobile"
SUMMARY = "Calendar for Plasma Mobile"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/calindori"
LICENSE = "BSD-2-Clause & CC-BY-4.0 & CC-BY-SA-4.0 & CC0-1.0 & GPL-3.0-or-later & LGPL-3.0-or-later"


inherit cmake_plasma
inherit kconfig 
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    kirigami \
    kcalendarcore \
    knotifications \
    kpeople \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

