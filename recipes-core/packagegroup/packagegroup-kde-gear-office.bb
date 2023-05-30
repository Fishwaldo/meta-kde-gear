DESCRIPTION = "KDE Gear Office Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-office \
"
RDEPENDS:packagegroup-kde-gear-office = " \
    ghostwriter \
"