# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Flash Card Trainer"
SUMMARY = "Flash Card Trainer"
HOMEPAGE = "https://invent.kde.org/education/kwordquiz"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kconfig
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    libkeduvocdocument \
    kconfigwidgets \
    kcrash \
    kguiaddons \
    kitemviews \
    knewstuff \
    knotifications \
    knotifyconfig \
    kxmlgui \
    qtmultimedia \
    kirigami-addons \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

