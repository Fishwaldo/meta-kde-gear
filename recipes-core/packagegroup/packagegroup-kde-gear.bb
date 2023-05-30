DESCRIPTION = "KDE Gear Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear \
"
RDEPENDS:packagegroup-kde-gear = " \
    packagegroup-kde-gear-accessiblity \
    packagegroup-kde-gear-pim \
    packagegroup-kde-gear-development \
    packagegroup-kde-gear-network \
    packagegroup-kde-gear-utilities \
    packagegroup-kde-gear-system \
    packagegroup-kde-gear-mobile \
    packagegroup-kde-gear-multimedia \
    packagegroup-kde-gear-graphics \
    packagegroup-kde-gear-education \
    packagegroup-kde-gear-games \
    packagegroup-kde-gear-sdk \
    packagegroup-kde-gear-office \
"