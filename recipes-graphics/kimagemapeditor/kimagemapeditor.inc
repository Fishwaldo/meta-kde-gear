# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Generator of HTML image maps"
SUMMARY = "HTML Image Map Editor"
HOMEPAGE = "https://invent.kde.org/graphics/kimagemapeditor"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=7c7221e4b5dc67c75be903c20ca3165c"

inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit mime-xdg

DEPENDS = " \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kguiaddons \
    kparts \
    kwidgetsaddons \
    kxmlgui \
    qtwebengine \
"

