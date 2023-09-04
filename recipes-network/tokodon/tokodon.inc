# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Tokodon is a Mastodon client for Plasma and Plasma Mobile"
SUMMARY = "A Mastodon client"
HOMEPAGE = "https://invent.kde.org/network/tokodon"
LICENSE = " AGPL-3.0-or-later & BSD-2-Clause & BSD-3-Clause & CC-BY-SA-4.0 & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & GPL-3.0-or-later & LGPL-2.0-or-later & LGPL-2.1-or-later & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL & MIT"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kirigami \
    knotifications \
    kirigami-addons \
    qtkeychain \
    qqc2-desktop-style \
    kdbusaddons \
    kio \
    kwindowsystem \
    qtmultimedia \
    qtwebsockets \
    mpv \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

