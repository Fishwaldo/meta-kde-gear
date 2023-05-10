SUMMARY = "KDebugSettings edits which QLoggingCategory are displayed"
DESCRIPTION = "KDebugSettings edits which QLoggingCategory are displayed. QLoggingCategory prints messages on the console for applications and you can define which applications display messages for information, warning or critical errors to help debugging Qt applications."
HOMEPAGE = "https://invent.kde.org/utilities/kdebugsettings"
LICENSE = "BSD-3-Clause & LGPL-2.0+ & CC0-1.0"

inherit cmake_kdeapp
inherit kcoreaddons
inherit kconfig
inherit kauth
inherit reuse_license_checksums

KF5_REUSE_LICENSECHECK_ENABLED="1"
    
DEPENDS = " \
    kitemviews \
    kwidgetsaddons \
    kdbusaddons \
    kcompletion \
    kxmlgui \
"

