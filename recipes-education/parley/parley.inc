# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Vocabulary Trainer"
SUMMARY = "Vocabulary Trainer"
HOMEPAGE = "https://invent.kde.org/education/parley"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-or-later & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL & MIT"


inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    libkeduvocdocument \
    kcrash \
    kio \
    knewstuff \
    knotifications \
    ktextwidgets \
    kxmlgui \
    sonnet \
    qtmultimedia \
    qtwebengine \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kxmlgui5/parley/themes \
    ${datadir}/icons/oxygen \
"