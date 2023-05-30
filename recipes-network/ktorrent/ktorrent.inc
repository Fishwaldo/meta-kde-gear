# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Powerful BitTorrent client"
SUMMARY = "Powerful BitTorrent client"
HOMEPAGE = "https://invent.kde.org/network/ktorrent"
LICENSE = " GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-only & LicenseRef-KDE-Accepted-GPL & Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit kcmutils
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    karchive \
    kcompletion \
    kcrash \
    kdnssd \
    kiconthemes \
    kio \
    kitemviews \
    knotifications \
    knotifyconfig \
    kparts \
    kplotting \
    ktextwidgets \
    kxmlgui \
    solid \
    syndication \
    phonon \
    libktorrent \
    qtwebengine \
    plasma-workspace \
    taglib \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

