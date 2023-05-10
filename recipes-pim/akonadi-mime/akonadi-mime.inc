# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Helpers to make working with emails through Akonadi easier "
SUMMARY = "Helpers to make working with emails through Akonadi easier "
HOMEPAGE = "https://invent.kde.org/pim/akonadi-mime"
LICENSE = "BSD-3-Clause & CC0-1.0 & GPL-2.0-only & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-LGPL"


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums
inherit mime-xdg
inherit mime 

DEPENDS = " \
    kio \
    kxmlgui \
    kitemmodels \
    akonadi \
    shared-mime-info \
    libxslt \
    kmime \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/akonadi/plugins/serializer/ \
    ${datadir}/mime/packages/ \
"