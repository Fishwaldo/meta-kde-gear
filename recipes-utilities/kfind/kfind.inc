# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "File search utility by KDE"
SUMMARY = "File search utility by KDE"
HOMEPAGE = "https://invent.kde.org/utilities/kfind"
LICENSE = " GPL-2.0-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    karchive \
    kfilemetadata \
    kio \
    kwidgetsaddons \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

