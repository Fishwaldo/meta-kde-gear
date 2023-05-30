# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Bookmarks editor"
SUMMARY = "Bookmarks editor"
HOMEPAGE = "https://invent.kde.org/utilities/keditbookmarks"
LICENSE = "GFDL-1.2 & GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=5c213a7de3f013310bd272cdb6eb7a24"

inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n


DEPENDS = " \
    kbookmarks \
    kiconthemes \
    kio \
    kparts \
    kwindowsystem \
"

