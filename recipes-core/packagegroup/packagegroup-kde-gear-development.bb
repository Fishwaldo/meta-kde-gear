DESCRIPTION = "KDE Gear Development Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-development \
"
RDEPENDS:packagegroup-kde-gear-development = " \
    kdebugsettings \
"