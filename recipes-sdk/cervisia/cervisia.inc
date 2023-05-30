# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "GUI for CVS"
SUMMARY = "A graphical CVS version control system front-end"
HOMEPAGE = "https://invent.kde.org/sdk/cervisia"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=7108e5acd7ce861dee282297d7c2f38c"


inherit cmake_plasma
inherit kdoctools
inherit ki18n
inherit mime-xdg


DEPENDS = " \
    kdesu \
    kiconthemes \
    kinit \
    kitemviews \
    knotifications \
    kparts \
    ktextwidgets \
    kwidgetsaddons \
"

FILES:${PN} += " \
    ${libdir}/libkdeinit5_cvsservice.so \
    ${libdir}/libkdeinit5_cvsaskpass.so \
    ${libdir}/libkdeinit5_cervisia.so \
"

FILES:${PN}-dev = "" 