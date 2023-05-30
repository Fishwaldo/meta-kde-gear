# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Application that helps to clean unwanted traces the user leaves on the system"
SUMMARY = "System cleaning utility"
HOMEPAGE = "https://invent.kde.org/utilities/sweeper"
LICENSE = " LGPL-2.1-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kactivities-stats \
    kbookmarks \
    kconfigwidgets \
    kcrash \
    kio \
    ktextwidgets \
    kxmlgui \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

