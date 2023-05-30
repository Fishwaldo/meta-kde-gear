# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Touch Typing Tutor"
SUMMARY = "Touch Typing Tutor"
HOMEPAGE = "https://invent.kde.org/education/ktouch"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.0-or-later"


inherit cmake_plasma
inherit kcmutils
inherit kconfig
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kcompletion \
    kconfigwidgets \
    kiconthemes \
    kitemviews \
    ktextwidgets \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    qtquickcontrols2 \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

