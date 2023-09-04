# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Tool to check contrast for colors that allows verifying that your colors are correctly accessible"
SUMMARY = "A Color Contrast Checker"
HOMEPAGE = "https://invent.kde.org/accessibility/kontrast"
LICENSE = " BSD-2-Clause & CC-BY-SA-4.0 & CC0-1.0 & GPL-3.0-only & GPL-3.0-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit kdoctools
inherit reuse_license_checksums


DEPENDS = " \
    kirigami \
    futuresql \
    qcoro \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

