# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Web browser for Plasma Mobile"
SUMMARY = "Web browser for Plasma Mobile"
HOMEPAGE = "https://invent.kde.org/network/angelfish"
LICENSE = "GPL-2.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later & MIT"


inherit cmake_plasma
inherit kcmutils 
inherit kcoreaddons
inherit ki18n
inherit kconfig
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    qtwebengine \
    qtfeedback \
    kirigami \
    purpose \
    kdbusaddons \
    kwindowsystem \
    knotifications \
    qqc2-desktop-style \
    kirigami-addons \
    futuresql \
    qcoro \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

