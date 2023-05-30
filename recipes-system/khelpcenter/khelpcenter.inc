# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Software documentation viewer"
SUMMARY = "Software documentation viewer"
HOMEPAGE = "https://invent.kde.org/system/khelpcenter"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    karchive \
    kbookmarks \
    khtml \
    kservice \
    kwindowsystem \
    grantlee \
    xapian-core \
    libxml2 \
"
RDEPENDS:${PN} += " \
    perl \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kde4/services \
"