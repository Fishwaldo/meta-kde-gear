DESCRIPTION = "KDE Gear Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear \
"
RDEPENDS:packagegroup-kde-gear = " \
    packagegroup-kde-gear-pim \
    packagegroup-kde-gear-development \
    packagegroup-kde-gear-network \
    packagegroup-kde-gear-utilities \
"