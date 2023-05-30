# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Sound editor by KDE"
SUMMARY = "Sound editor by KDE"
HOMEPAGE = "https://invent.kde.org/multimedia/kwave"
LICENSE = "GPL-2.0-or-later & LGPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES;md5=afc54e16d3bdc67b661c0a671d7416e0"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit mime-xdg

DEPENDS = " \
    karchive \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kiconthemes \
    kio \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
    qtmultimedia \
    audiofile \
    libsamplerate0 \
    id3lib \
    libmad \
    fftw \
"
EXTRA_OECMAKE += "-DWITH_DOC=OFF"

