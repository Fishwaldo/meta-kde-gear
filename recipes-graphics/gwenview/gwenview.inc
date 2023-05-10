# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Image viewer by KDE"
SUMMARY = "Image viewer by KDE"
HOMEPAGE = "https://invent.kde.org/multimedia/dragon"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=5a3169a2d39a757efd8b7aa66a69d97b"

inherit cmake_plasma
inherit kconfig
inherit ki18n
inherit kcoreaddons
inherit kdoctools

DEPENDS = " \
    kio \
    kitemmodels \
    kparts \
    kwindowsystem \
    kiconthemes \
    knotifications \
    kguiaddons \
    kwidgetsaddons  \
    kactivities \
    purpose \
    phonon \
    wayland \
    baloo \
    qtwayland-native \
    exiv2 \
    lcms \
    jpeg \
    libkdcraw \
    kimageannotator \
"

FILES:${PN} += " \
    ${datadir}/solid/actions/ \
"
