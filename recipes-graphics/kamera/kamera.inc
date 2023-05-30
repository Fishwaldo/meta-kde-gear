# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE integration for gphoto2 cameras"
SUMMARY = "KDE integration for gphoto2 cameras"
HOMEPAGE = "https://invent.kde.org/graphics/kamera"
LICENSE = " BSD-3-Clause & GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kconfigwidgets \
    kio \
    kxmlgui \
    gphoto2 \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/solid/actions/ \
"