# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "A client for matrix, the decentralized communication protocol"
SUMMARY = "A client for matrix, the decentralized communication protocol"
HOMEPAGE = "https://invent.kde.org/network/neochat"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC-BY-SA-4.0 & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & GPL-3.0-or-later & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL & MIT"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums
inherit pkgconfig
inherit mime-xdg


DEPENDS = " \
    kirigami \
    kitemmodels \
    knotifications \
    kquickcharts \
    sonnet \
    syntax-highlighting \
    kirigami-addons \
    kquickimageeditor \
    cmark-native \
    cmark \
    libquotient \
    qcoro \
    qtkeychain \
    kconfigwidgets \
    kio \
    kwindowsystem \
    qqc2-desktop-style \
    kdbusaddons \
    sqlite3 \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/krunner/dbusplugins \
"
