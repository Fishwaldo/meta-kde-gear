# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KDE document viewer"
SUMMARY = "KDE document viewer"
HOMEPAGE = "https://invent.kde.org/graphics/okular"
LICENSE = "BSD-2-Clause & BSD-3-Clause & GFDL-1.2-or-later & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & GPL-3.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later & LicenceRef-KDE-Accepted-GPL & MIT & X11"


inherit cmake_plasma
inherit kconfig
inherit ki18n
inherit kcoreaddons
inherit kdoctools
inherit mime-xdg
inherit reuse_license_checksums

DEPENDS = " \
    kconfig \
    karchive \
    kbookmarks \
    kcompletion \
    kconfigwidgets \
    kio \
    threadweaver \
    kwindowsystem \
    kwallet \
    kjs \
    kparts \
    kcrash \
    kiconthemes \
    ktextwidgets \
    purpose \
    kactivities \
    phonon \
    zlib \
    poppler \
    freetype \
    tiff \
    jpeg \
    libkexiv2 \
    libzip \
    kpty \
"
EXTRA_OECMAKE += " \
    -DOE_KF5_PATH_HOST_ROOT=${STAGING_DIR_HOST} \
    -DFORCE_NOT_REQUIRED_DEPENDENCIES="Qt5TextToSpeech;LibSpectre;CHM;KF5KHtml;DjVuLibre;EPub;QMobipocket;Discount;" \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"