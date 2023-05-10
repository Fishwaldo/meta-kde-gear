# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Calculator offering everything a scientific calculator does, and more"
SUMMARY = "Calculator offering everything a scientific calculator does, and more"
HOMEPAGE = "https://invent.kde.org/utilities/kcalc"
LICENSE = "BSD-3-Clause & CC0-1.0 & GLP-2.0-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit kconfig
inherit ki18n
inherit kdoctools
inherit reuse_license_checksums

DEPENDS = " \
    kcrash \
    kconfigwidgets \
    kguiaddons \
    knotifications \
    kxmlgui \
    gmp \
    mpfr \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kglobalaccel/ \
"