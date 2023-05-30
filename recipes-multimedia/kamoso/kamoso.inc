# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Application to take pictures and videos with your webcam"
SUMMARY = "Use your webcam to take pictures and make videos"
HOMEPAGE = "https://invent.kde.org/multimedia/kamoso"
LICENSE = " GFDL-1.2-or-later & GPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later"


inherit cmake_plasma
inherit kconfig
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kio \
    knotifications \
    purpose \
    gstreamer1.0 \
    gstreamer1.0-libav \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/gstreamer-1.0/ \
"