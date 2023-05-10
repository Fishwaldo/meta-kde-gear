# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Helpers to make working with emails through Akonadi easier "
SUMMARY = "Helpers to make working with emails through Akonadi easier "
HOMEPAGE = "https://invent.kde.org/pim/akonadi-mime"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-or-later & LGPL-2.0-or-later & LGPL-2.1-or-later"


inherit cmake_plasma
inherit ki18n
inherit kconfig
inherit reuse_license_checksums

DEPENDS = " \
    kguiaddons \
    kiconthemes \
    knewstuff \
    kxmlgui \
    grantlee \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/grantlee/5.3/kde_grantlee_plugin.so \
"
