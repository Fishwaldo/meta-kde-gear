# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Audio jukebox app, supporting collections of MP3, Ogg Vorbis and FLAC audio files"
SUMMARY = "Music Player"
HOMEPAGE = "https://invent.kde.org/multimedia/juk"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"

inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n


DEPENDS = " \
    kcompletion \
    kcrash \
    kdbusaddons \
    kiconthemes \
    kio \
    kjobwidgets \
    knotifications \
    ktextwidgets \
    kwallet \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    phonon \
    taglib \
"

FILES:${PN} += " \
    ${datadir}/kio/servicemenus/ \
"