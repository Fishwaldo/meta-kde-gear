# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Modern text editor built on the KDE Frameworks and Qt"
SUMMARY = "Modern text editor built on the KDE Frameworks and Qt"
HOMEPAGE = "https://invent.kde.org/utilities/kate"
LICENSE = "CC0-1.0 & GPL-2.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later & MIT"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit mime-xdg
inherit reuse_license_checksums

DEPENDS = " \
    kguiaddons \
    kcrash \
    ktexteditor \
    kiconthemes \
    knewstuff \
    kactivities \
    kuserfeedback \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kateproject/ \
    ${datadir}/katexmltools/ \  
"