# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Computer-aided translation"
SUMMARY = "Computer-aided translation system"
HOMEPAGE = "https://invent.kde.org/sdk/lokalize"
LICENSE = " BSD-3-Clause & GFDL-1.2-or-later & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.1-or-later & LicenseRef-KDE-Accepted-GPL & LicenseRef-Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kcrash \
    kdbusaddons \
    kio \
    knotifications \
    kxmlgui \
    sonnet \
    hunspell \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

