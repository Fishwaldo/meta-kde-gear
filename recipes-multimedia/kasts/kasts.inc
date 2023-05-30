# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Kirigami-based podcast player"
SUMMARY = "Podcast application"
HOMEPAGE = "https://invent.kde.org/multimedia/kasts"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC-BY-SA-4.0 & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & GPL-3.0-or-later & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LGPL-3.0-or-later & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kirigami \
    syndication \
    threadweaver \
    kirigami-addons \
    qtkeychain \
    taglib \
    qtmultimedia \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/qml/org/kde/kmediasession \
    ${libdir}/qml/org/kde/kasts/solidextras/ \
    ${libdir}/libKastsSolidExtras.so \
    ${libdir}/libKMediaSession.so \
"
FILES:${PN}-dev = ""
