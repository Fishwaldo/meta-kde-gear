# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Backup program with an easy-to-use interface"
SUMMARY = "Backup program with an easy-to-use interface"
HOMEPAGE = "https://invent.kde.org/utilities/kbackup"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=4e068d050b28e4405b691fdc9d54afdd"

inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit mime
inherit mime-xdg

DEPENDS = " \
    karchive \
    kguiaddons \
    kiconthemes \
    kio \
    knotifications \
    kwidgetsaddons \
    kxmlgui \
    libarchive \
"

FILES:${PN} += " \
    ${datadir}/mime/packages/ \
"