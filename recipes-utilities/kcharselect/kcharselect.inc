# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Tool to select and copy special characters from all installed fonts"
SUMMARY = "Character Selector"
HOMEPAGE = "https://invent.kde.org/utilities/kcharselect"
LICENSE = " BSD-3-Clause & CC0-1.0 & GPL-2.0-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kbookmarks \
    kcrash \
    kwidgetsaddons \
    kxmlgui \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

