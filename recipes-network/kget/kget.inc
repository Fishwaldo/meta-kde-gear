# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Download Manager"
SUMMARY = "Download Manager"
HOMEPAGE = "https://invent.kde.org/network/kget"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=3c8ea28d12b8a786603a5394fc50096d"

SRC_URI += " \
    file://0001-Hardcode-GMP-Version-due-to-cross-compile.patch \
"

inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit mime-xdg

DEPENDS = " \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kiconthemes \
    kio \
    kitemviews \
    knotifications \
    knotifyconfig \
    kparts \
    kservice \
    ktextwidgets \
    kwallet \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    libktorrent \
    gpgme \
    gmp \
    libtorrent \
    libmms \
    plasma-workspace \
"

FILES:${PN} += " \
    ${datadir}/kio/servicemenus/ \
"