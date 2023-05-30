# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Program that clicks the mouse for you"
SUMMARY = "Program that clicks the mouse for you"
HOMEPAGE = "https://invent.kde.org/accessibility/kmousetool"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kdbusaddons \
    kiconthemes \
    knotifications \
    kwindowsystem \
    kxmlgui \
    phonon \
    libxt \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

