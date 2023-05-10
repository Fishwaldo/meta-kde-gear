# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Clock app for Plasma Mobile"
SUMMARY = "Clock app for Plasma Mobile"
HOMEPAGE = "https://invent.kde.org/utilities/kclock"
LICENSE = "CC0-1.0 & GPL-2.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later & MIT"


inherit cmake_plasma
inherit kconfig
inherit kdoctools
inherit ki18n
inherit kcoreaddons
inherit mime-xdg
inherit reuse_license_checksums

DEPENDS = " \
    kirigami \
    knotifications \
    kdbusaddons \
    kirigami-addons \
    qtmultimedia \
    plasma-framework \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/plasma/plasmoids/org.kde.plasma.kclock_1x2 \
"