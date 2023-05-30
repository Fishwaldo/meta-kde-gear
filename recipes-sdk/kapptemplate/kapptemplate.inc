# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Factory for the easy creation of KDE/Qt components and programs"
SUMMARY = "Factory for the easy creation of KDE/Qt components and programs"
HOMEPAGE = "https://invent.kde.org/sdk/kapptemplate"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    karchive \
    kcompletion \
    kconfigwidgets \
    kio \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

