# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Audio recorder for Plasma Mobile and other platforms"
SUMMARY = "Audio recorder"
HOMEPAGE = "https://invent.kde.org/utilities/krecorder"
LICENSE = " BSD-3-Clause & CC-BY-4.0 & CC0-1.0 & GPL-3.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kirigami \
    kwindowsystem \
    kirigami-addons \
    qtmultimedia \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

