# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library that lets you add mathematical features to your program"
SUMMARY = "Library that lets you add mathematical features to your program"
HOMEPAGE = "https://invent.kde.org/education/analitza"
LICENSE = "GPL-2.0-or-later & LGPL-2.0-or-later"
LIC_FILES_CHKSUM = " \
    file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263 \
    file://COPYING.LIB;md5=5f30f0716dfdd0d91eb439ebec522ec2 \
    "

inherit cmake_plasma

DEPENDS = " \
    libeigen \
"

FILES:${PN} += " \
    ${libdir}/qml/org/kde/analitza/ \
    ${datadir}/libanalitza/plots/ \
"