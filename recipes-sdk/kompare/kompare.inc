# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Graphical File Differences Tool"
SUMMARY = "Graphical File Differences Tool"
HOMEPAGE = "https://invent.kde.org/sdk/kompare"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kcodecs \
    kiconthemes \
    kjobwidgets \
    kparts \
    ktexteditor \
    kwidgetsaddons \
    libkomparediff2 \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \ 
    ${datadir}/kio/servicemenus \
"