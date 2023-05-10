# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Libraries and daemons to implement searching in Akonadi "
SUMMARY = "Libraries and daemons to implement searching in Akonadi "
HOMEPAGE = "https://invent.kde.org/pim/akonadi-search"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit kconfig 
inherit kcmutils
inherit ki18n
inherit pkgconfig
inherit cmake_sysroot
inherit reuse_license_checksums

DEPENDS = " \
    kcrash \
    kdbusaddons \
    kio \
    krunner \
    xapian-core \
    akonadi \
    kcontacts \
    kmime \
    akonadi-mime \
    kcalendarcore \
    solid \
    freetype \
    fontconfig \
    kjobwidgets \
"
 
KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/plugins/kf5/krunner/kcms/ \
    ${datadir}/akonadi/agents \
"

