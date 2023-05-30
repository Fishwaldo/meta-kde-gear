# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Multi-platform app that allows your devices to communicate"
SUMMARY = "Multi-platform app that allows your devices to communicat"
HOMEPAGE = "https://invent.kde.org/network/kdeconnect-kde"
LICENSE = " Apache-2.0 & BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL & MIT"


inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kcontacts \
    kdbusaddons \
    kiconthemes \
    kio \
    kirigami \
    kitemmodels \
    knotifications \
    kpeople \
    kservice \
    kwindowsystem \
    qqc2-desktop-style \
    solid \
    kpackage \
    plasma-wayland-protocols \
    pulseaudio-qt \
    modemmanager-qt \
    qtwayland-native \
    qtmultimedia \
"

EXTRA_OECMAKE += "-DEXPERIMENTALAPP_ENABLED=ON"
EXTRA_OECMAKE += "-DSMSAPP_ENABLED=OFF"
# workaround for missing variable, which is only used for Windows builds
EXTRA_OECMAKE += "-DCMAKE_SYSTEM_VERSION=0.0.0"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/qml/org/kde/kdeconnect \
    ${datadir}/kdeconnect \
    ${datadir}/contractor \
    ${datadir}/Thunar/sendto \
    ${datadir}/deepin/dde-file-manager/oem-menuextensions \
    ${datadir}/zsh/site-functions \
    ${datadir}/nautilus-python/extensions \
    ${datadir}/plasma/plasmoids/org.kde.kdeconnect \
"
