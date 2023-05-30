# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Task scheduler by KDE"
SUMMARY = "Task scheduler by KDE"
HOMEPAGE = "https://invent.kde.org/system/kcron"
LICENSE = " CC0-1.0 & GPL-2.0-or-later"


inherit cmake_plasma
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kconfigwidgets \
    kio \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

