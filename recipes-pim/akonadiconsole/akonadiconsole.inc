# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Application for debugging Akonadi Resources"
SUMMARY = "Application for debugging Akonadi Resources"
HOMEPAGE = "https://invent.kde.org/pim/akonadiconsole"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL3.0-only & LGPL-2.0-or-later & LGPL-2.1-or-later & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kconfig 
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    kcompletion \
    kdbusaddons \
    kitemmodels \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
    kcrash \
    kitemviews \
    kio \
    akonadi \
    kcontacts \
    kcalendarcore \
    kmime \
    akonadi-mime \
    libkdepim \
    akonadi-contacts \
    calendarsupport \
    akonadi-search \
    messagelib \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/akonadi/plugins/serializer \
"