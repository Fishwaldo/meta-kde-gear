DESCRIPTION = "KDE Gear Utility Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-utilities \
"
RDEPENDS:packagegroup-kde-gear-utilities = " \
    print-manager \
"