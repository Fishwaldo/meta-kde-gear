SUMMARY = "Powerful libraries (KChart, KGantt) for creating business diagrams"
HOMEPAGE = "https://invent.kde.org/graphics/kdiagram"
LICENSE = "GPL-2.0-or-later & LGPL-2.0-or-later"

inherit cmake_kf5
inherit reuse_license_checksums

DEPENDS += " \
    qtsvg \
"

