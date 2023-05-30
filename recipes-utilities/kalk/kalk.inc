# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Kalk is a powerful cross-platform calculator application built with the [Kirigami framework](https://kde.org/products/kirigami/)"
SUMMARY = "A feature rich calculator"
HOMEPAGE = "https://invent.kde.org/utilities/kalk"
LICENSE = " BSD-2-Clause & BSD-3-Clause & CC-BY-4.0 & CC0-1.0 & GPL-2.0-or-later & GPL-3.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kirigami \
    kunitconversion \
    bison-native \
    gmp \
    mpfr \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

