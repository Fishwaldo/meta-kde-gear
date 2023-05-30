# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Lite image scanning application"
SUMMARY = "Lite image scanning application"
HOMEPAGE = "https://invent.kde.org/graphics/skanlite"
LICENSE = " GPL-2.0-only & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kio \
    kxmlgui \
    libksane \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

