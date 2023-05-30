# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "A small utility to select a color"
SUMMARY = "Color selector and palette editor"
HOMEPAGE = "https://invent.kde.org/graphics/kcolorchooser"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://COPYING;md5=838c366f69b72c5df05c96dff79b35f2"

inherit cmake_plasma
inherit ki18n


DEPENDS = " \
    kxmlgui \
"


