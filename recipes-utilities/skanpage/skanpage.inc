# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Utility to scan images and multi-page documents"
SUMMARY = "Multi-page document scanning application"
HOMEPAGE = "https://invent.kde.org/utilities/skanpage"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcrash \
    kirigami \
    kxmlgui \
    purpose \
    kquickimageeditor \
    ksanecore \
    tesseract \
    leptonica \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

