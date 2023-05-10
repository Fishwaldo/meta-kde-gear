# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "File manager by KDE"
SUMMARY = "File manager by KDE"
HOMEPAGE = "https://invent.kde.org/system/dolphin"
LICENSE = "BSD-2-Clause & BSD-3-Clause & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit kcmutils 
inherit kcoreaddons
inherit ki18n
inherit kconfig
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    knewstuff \
    kdbusaddons \
    kbookmarks \
    kio \
    kparts \
    solid \
    kiconthemes \
    kcompletion \
    ktextwidgets \
    knotifications \
    kcrash \
    kwindowsystem \
    kwidgetsaddons \
    kcodecs \
    kactivities \
    phonon \
    kuserfeedback \
    packagekit-qt \
    baloo \
    baloo-widgets \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kglobalaccel/ \
    ${datadir}/zsh/site-functions/ \
"