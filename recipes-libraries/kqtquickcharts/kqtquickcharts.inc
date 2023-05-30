# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "QtQuick plugin to render beautiful and interactive charts"
SUMMARY = "QtQuick plugin to render beautiful and interactive charts"
HOMEPAGE = "https://invent.kde.org/libraries/kqtquickcharts"
LICENSE = " BSD-3-Clause"


inherit cmake_plasma
inherit reuse_license_checksums


DEPENDS = " \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/qml/org/kde/charts/ \
"