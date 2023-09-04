# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "A calendar application using Akonadi to sync with external services (Nextcloud, GMail, ...)"
SUMMARY = "A calendar application using Akonadi to sync with external services (Nextcloud, GMail, ...)"
HOMEPAGE = "https://invent.kde.org/pim/kalendar"
LICENSE = "BSD-2-Clause & BSD-3-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & GPL-3.0-or-later & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-2.1-or-later & LGPL-3.0-only & LGPL-3.0-or-later & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL & LicenseRef-Qt-Commercial-exception-1.0"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit mime-xdg
inherit reuse_license_checksums

DEPENDS = " \
    kcalendarcore \
    kconfigwidgets \
    kcontacts \
    kdbusaddons \
    kiconthemes \
    kitemmodels \
    kirigami \
    kio \
    kwindowsystem \
    kxmlgui \
    kirigami-addons \
    gpgme \
    akonadi \
    akonadi-calendar \
    akonadi-contacts \
    akonadi-mime \
    kidentitymanagement \
    mailcommon \
    qqc2-desktop-style \
    calendarsupport \
    eventviews \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/qml/org/kde/merkuro \
    ${libdir}/qml/org/kde/akonadi/ \
    ${datadir}/plasma/plasmoids/org.kde.merkuro.contact/ \
"

RREPLACES:${PN} += " \
    kalendar \
"
RCONFLICTS:${PN} += " \
    kalendar \
"