# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Remote Desktop Client"
SUMMARY = "Connect with RDP or VNC to another computer"
HOMEPAGE = "https://invent.kde.org/network/krdc"
LICENSE = " BSD-3-Clause & GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kactivities \
    kbookmarks \
    kcompletion \
    kdnssd \
    kiconthemes \
    knotifications \
    knotifyconfig \
    kwallet \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    libssh \
    libvncserver \
    freerdp \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \ 
    ${datadir}/kio/servicemenus \
"