# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Easy-to-use paint program"
SUMMARY = "Paint Program"
HOMEPAGE = "https://invent.kde.org/graphics/kolourpaint"
LICENSE = "LGPL-2.0-only & LGPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=7549f6da638b0246572ed9cf4275b860"


inherit cmake_plasma
inherit kdoctools
inherit ki18n
inherit mime-xdg


DEPENDS = " \
    kguiaddons \
    kio \
    kjobwidgets \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
    libksane \
"

