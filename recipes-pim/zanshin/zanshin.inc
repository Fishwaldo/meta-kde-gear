# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Getting Things Done application which aims at getting your mind like water"
SUMMARY = "Getting Things Done application which aims at getting your mind like water"
HOMEPAGE = "https://invent.kde.org/pim/zanshin"
LICENSE = " CC0-1.0 & GPL-2.0-only & GPL-3.0-only & LGPL-2.0-or-later & LicenseRef-KDE-Accepted-GPL & MIT"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    krunner \
    kwindowsystem \
    akonadi \
    akonadi-calendar \
    kontactinterface \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

