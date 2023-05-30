# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Educational programming environment that uses TurtleSpeak"
SUMMARY = "Educational Programming Environment"
HOMEPAGE = "https://invent.kde.org/education/kturtle"
LICENSE = " GPL-2.0-only & GPL-2.0-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcrash \
    kio \
    knewstuff \
    ktextwidgets \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

