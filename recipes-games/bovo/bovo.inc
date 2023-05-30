# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Bovo is a Gomoku like game for two players"
SUMMARY = ""Five in a row" board game"
HOMEPAGE = "https://invent.kde.org/games/bovo"
LICENSE = " GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=3c8ea28d12b8a786603a5394fc50096d"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools


DEPENDS = " \
    kcrash \
    kdbusaddons \
    kxmlgui \
    libkdegames \
"

