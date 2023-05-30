# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Cross-platform Qt-based web browser"
SUMMARY = "Cross-platform Qt-based web browser"
HOMEPAGE = "https://invent.kde.org/network/falkon"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=8f0e2cd40e05189ec81232da84bd6e1a"

inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit mime-xdg

DEPENDS = " \
    karchive \
    kcrash \
    kio \
    kwallet \
    purpose \
    qtwebchannel \
    qtwebengine \
"

FILES:${PN} += " \
    ${datadir}/bash-completion/completions/ \
"