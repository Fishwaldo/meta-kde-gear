# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Chess board program."
SUMMARY = "Chess board program."
HOMEPAGE = "https://invent.kde.org/games/knights"
LICENSE = " GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kio \
    kplotting \
    ktextwidgets \
    kwallet \
    kwidgetsaddons \
    kxmlgui \
    libkdegames \
    plasma-framework \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

