# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "KPublicTransport"
DESCRIPTION = "Library to assist with accessing public transport timetables and other data"
HOMEPAGE = "https://invent.kde.org/libraries/kpublictransport"
LICENSE = "MIT & BSD-3-Clause & LGPL-2.0+"

DEPENDS = " \
    qtdeclarative \
    networkmanager-qt \
"

inherit cmake_plasma
inherit mime-xdg
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/qml/org/kde/kpublictransport/ \
"