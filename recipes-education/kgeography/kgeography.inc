# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Geography Trainer"
SUMMARY = "Geography Trainer"
HOMEPAGE = "https://invent.kde.org/education/kgeography"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=751419260aa954499f7abaabaa882bbe"

inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n

DEPENDS = " \
    kconfigwidgets \
    kcrash \
    kiconthemes \
    kitemviews \
    kwidgetsaddons \
    kxmlgui \
"

