# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plugins extending KDE graphics apps, e.g. with import/export capabilities"
SUMMARY = "Plugins extending KDE graphics apps, e.g. with import/export capabilities"
HOMEPAGE = "https://invent.kde.org/graphics/kipi-plugins"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=c9d687051a11fc1a5f2145cffe150746"


inherit cmake_plasma
inherit kconfig
inherit ki18n

DEPENDS = " \
    kio \
    kwindowsystem \
    kxmlgui \
    libkipi \
"

FILES:${PN} += " \
    ${datadir}/kipiplugin_printimages/templates \
    ${datadir}/kipiplugin_piwigo/pics \
"

