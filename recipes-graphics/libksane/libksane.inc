# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library providing QWidget with all the logic to interface scanners"
SUMMARY = "Library providing QWidget with all the logic to interface scanners"
HOMEPAGE = "https://invent.kde.org/graphics/libksane"
LICENSE = " CC0-1.0 & LGPL-2.1-only & LGPL-3.0-only & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    ktextwidgets \
    kwallet \
    kwidgetsaddons \
    ksanecore \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

