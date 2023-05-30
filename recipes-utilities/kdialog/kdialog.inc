# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Tool to show nice dialog boxes from shell scripts"
SUMMARY = "Tool to show nice dialog boxes from shell scripts"
HOMEPAGE = "https://invent.kde.org/utilities/kdialog"
LICENSE = " GPL-2.0-or-later"


inherit cmake_plasma
inherit reuse_license_checksums


DEPENDS = " \
    kdbusaddons \
    kguiaddons \
    kiconthemes \
    kio \
    knotifications \
    ktextwidgets \
    kwindowsystem \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

