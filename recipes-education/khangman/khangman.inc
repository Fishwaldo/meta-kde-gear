# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "A hangman game"
SUMMARY = "Hangman Game"
HOMEPAGE = "https://invent.kde.org/education/khangman"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=cb56c8b10bbb1c97490192a78c4fb273"

inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n

DEPENDS = " \
    libkeduvocdocument \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kio \
    knewstuff \
    knotifications \
    kxmlgui \
"

