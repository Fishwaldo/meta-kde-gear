# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "GUI to profilers such as Valgrind"
SUMMARY = "GUI to profilers such as Valgrind"
HOMEPAGE = "https://invent.kde.org/sdk/kcachegrind"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-only & LGPL-2.1-only & LGPL-3.0-only & LicenseRef-Qt-Commercial & Qt-LGPL-exception-1.1"

inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    karchive \
    kdbusaddons \
    kio \
    kwidgetsaddons \
    kxmlgui \
"
RDEPENDS:${PN} += " \
    perl \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

