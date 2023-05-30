# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KsirK is a computerized version of a well known strategy game"
SUMMARY = "KsirK is a computerized version of a well known strategy game"
HOMEPAGE = "https://invent.kde.org/games/ksirk"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=393a5ca445f6965873eca0259a17f833"

inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n


DEPENDS = " \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kio \
    knewstuff \
    kwallet \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
    phonon \
    qca \
"

FILES:${PN} += " \
    ${datadir}/ksirkskineditor \
"
