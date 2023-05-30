# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Simple interface for GnuPG, a powerful encryption utility"
SUMMARY = "Encryption Tool"
HOMEPAGE = "https://invent.kde.org/utilities/kgpg"
LICENSE = " GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg

DEPENDS = " \
    karchive \
    kcodecs \
    kconfigwidgets \
    kcontacts \
    kcrash \
    kdbusaddons \
    kguiaddons \
    kio \
    kjobwidgets \
    knotifications \
    kservice \
    ktextwidgets \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    akonadi-contacts \
    gpgme \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kio/servicemenus \
"
