# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "A Qt-based client-side and server-side SOAP component"
LICENSE = "(GPL-2.0-only & LGPL-2.1-only & AGPL-3.0-only) | KDAB-Commercial"
LIC_FILES_CHKSUM = " \
    file://LICENSE.txt;md5=66cfc29dba5539de86890b2a08dcab8f \
"

DEPENDS = " \
    qtbase \
    qtdeclarative \
"

inherit cmake_qt5

EXTRA_OECMAKE += " -DKDSoap_EXAMPLES=false -DKDSoap_TESTS=false"

FILES:${PN}-dev += " \
    ${datadir}/mkspecs/features \
    /usr/mkspecs \
"


BBCLASSEXTEND="native"