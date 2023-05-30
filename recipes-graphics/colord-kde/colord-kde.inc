# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Provides interfaces and session daemon to colord"
SUMMARY = "Provides interfaces and session daemon to colord"
HOMEPAGE = "https://invent.kde.org/graphics/colord-kde"
LICENSE = "GPL-2.0-or-later"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"


inherit cmake_plasma
inherit kcmutils
inherit kcoreaddons
inherit ki18n
inherit mime-xdg

DEPENDS = " \
    kconfigwidgets \
    kdbusaddons \
    kitemmodels \
    kwidgetsaddons \
    kwindowsystem \
    lcms \
    kirigami-addons \
"

FILES:${PN} += " \
    ${datadir}/kpackage/kcms/kcm_colord/contents/ \
"