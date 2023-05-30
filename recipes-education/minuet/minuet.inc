# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Free and open-source software for music education"
SUMMARY = "Free and open-source software for music education"
HOMEPAGE = "https://invent.kde.org/education/minuet"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"

inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n


DEPENDS = " \
    kcrash \
    fluidsynth \
    qtquickcontrols2 \
"


