# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Quickly visualize your disk space usage"
SUMMARY = "Filelight allows you to understand exactly where your diskspace is being used by \
graphically representating your filesystem as a set of concentric \
segmented-rings."
HOMEPAGE = "https://invent.kde.org/utilities/filelight"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-only & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kcrash \
    kio \
    kxmlgui \
    qtquickcontrols2 \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

