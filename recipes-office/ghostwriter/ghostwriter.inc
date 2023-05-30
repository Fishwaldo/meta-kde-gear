# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Text editor for Markdown"
SUMMARY = "ghostwriter is a Windows and Linux text editor for Markdown, which is a plain text markup format created by John Gruber"
HOMEPAGE = "https://invent.kde.org/office/ghostwriter"
LICENSE = " Apache-2.0 & BSD-2-Clause & BSD-3-Clause & CC-BY-SA-4.0 & CC0-1.0 & GPL-3.0-or-later & LGPL-2.1-or-later & MIT & OFL-1.1"


inherit cmake_plasma
inherit kcoreaddons
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kconfigwidgets \
    kxmlgui \
    sonnet \
    hunspell \
    qtwebchannel \
    qtwebengine \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

