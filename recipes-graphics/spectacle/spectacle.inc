# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Screenshot capture utility"
SUMMARY = "Screenshot capture utility"
HOMEPAGE = "https://invent.kde.org/graphics/spectacle"
LICENSE = " BSD-3-Clause & GFDL-1.2-or-later & GPL-2.0-only & GPL-2.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-2.1-or-later & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kdbusaddons \
    kglobalaccel \
    kio \
    knotifications \
    kwayland \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    purpose \
    kpipewire \
    wayland \
    qtwayland-native \
    xcb-util-cursor \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kglobalaccel \
"