# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plugins for Dolphin"
SUMMARY = "Plugins for Dolphin"
HOMEPAGE = "https://invent.kde.org/sdk/dolphin-plugins"
LICENSE = "GPL-2.0-or-later"

inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums

DEPENDS = " \
    dolphin \
    kxmlgui \
    kio \
    ktextwidgets \
    solid \
    ktexteditor \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

