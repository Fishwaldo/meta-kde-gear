DESCRIPTION = "KDE Gear PIM Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-pim \
"
RDEPENDS:packagegroup-kde-gear-pim = " \
    akonadi \
"