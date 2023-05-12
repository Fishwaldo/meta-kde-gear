# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Simple music player aiming to provide a nice experience for its users"
SUMMARY = "Simple music player aiming to provide a nice experience for its users"
HOMEPAGE = "https://invent.kde.org/multimedia/elisa"
LICENSE = "BSD-2-Clause & BSD-3-Clause & CC0-1.0 & GPL-3.0-or-later & LGPL-2.1-only & LGPL-3.0-only & LGPL-3.0-or-later & LicenceRef-KDE-Accepted-LGPL & MIT"


inherit cmake_plasma
inherit kconfig
inherit ki18n
inherit kcoreaddons
inherit kdoctools
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    qtmultimedia \
    kirigami \
    kiconthemes \
    baloo \
    kfilemetadata \
    kxmlgui \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kio \
    vlc \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/qml/org/kde/elisa/ \
"