# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Virtual Globe and World Atlas that you can use to learn more about the Earth"
SUMMARY = "Virtual Globe and World Atlas that you can use to learn more about the Earth"
HOMEPAGE = "https://invent.kde.org/education/marble"
LICENSE = " Apache-2.0 & BSD-3-Clause & CC0-1.0 & GPL-3.0-only & GPL-3.0-or-later & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-Qt-Commercial & MIT & Qt-LGPL-exception-1.1"


inherit cmake_plasma
inherit reuse_license_checksums
inherit mime-xdg
inherit mime

DEPENDS = " \
    qtwebengine \
    qtwebchannel \
    phonon \
    qtserialport \
    gpsd \
    qtlocation \
    knewstuff \
    plasma-framework \
    krunner \
    protobuf \
    kparts \
"

EXTRA_OECMAKE += "-DBUILD_MARBLE_TOOLS=YES"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/plasma/plasmoids \
    ${datadir}/plasma/wallpapers \
    ${datadir}/mime/packages \
    ${libdir}/qml/org/kde/marble/private/plasma/ \
    ${libdir}/libmarbledeclarative.so \
"

FILES:${PN}-dev = " \
    ${includedir}/marble \
    ${includedir}/astro \
    ${libdir}/libmarblewidget-qt5.so \
    ${libdir}/libastro.so \
"

