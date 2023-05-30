# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Qt/C++ interface to use kipi-plugins from KDE image management programs"
SUMMARY = "Qt/C++ interface to use kipi-plugins from KDE image management programs"
HOMEPAGE = "https://invent.kde.org/graphics/libkipi"
LICENSE = " BSD-3-Clause & GPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit reuse_license_checksums


DEPENDS = " \
    kservice \
    kxmlgui \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

