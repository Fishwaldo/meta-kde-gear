# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Image gallery application"
SUMMARY = "Image Gallery"
HOMEPAGE = "https://invent.kde.org/graphics/koko"
LICENSE = " CC0-1.0 & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-LGPL"



inherit cmake_plasma
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg


DEPENDS = " \
    kdbusaddons \
    kdeclarative \
    kfilemetadata \
    kguiaddons \
    kio \
    kirigami \
    knotifications \
    kquickimageeditor \
    qtlocation \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

do_configure:prepend() {
    cp ${WORKDIR}/cities1000.zip.txt ${S}/src/cities1000.zip
    cp ${WORKDIR}/admin1CodesASCII.txt ${S}/src/
    cp ${WORKDIR}/admin2Codes.txt ${S}/src/
}

FILES:${PN} += " \
    ${libdir}/qml/org/kde/koko/ \
"