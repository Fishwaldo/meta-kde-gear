# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Tool to manage the passwords on your system"
SUMMARY = "Tool to manage the passwords on your system"
HOMEPAGE = "https://invent.kde.org/utilities/kwalletmanager"
LICENSE = "CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-only & LGPL-2.0-or-later & LicenceRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit ki18n
inherit kcoreaddons
inherit kconfig
inherit kcmutils
inherit kdoctools
inherit mime-xdg
inherit reuse_license_checksums

DEPENDS = " \
    karchive \
    kconfigwidgets \
    kdbusaddons \
    kjobwidgets \
    kio \
    knotifications \
    kservice \
    ktextwidgets \
    kwallet \
    kwindowsystem \
    kxmlgui \
    kcrash \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

