# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "A KPart for SVG support"
SUMMARY = "A KPart for SVG support"
HOMEPAGE = "https://invent.kde.org/graphics/svgpart"
LICENSE = " GPL-2.0-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kparts \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

