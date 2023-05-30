DESCRIPTION = "KDE Gear accessiblity Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-accessiblity \
"
RDEPENDS:packagegroup-kde-gear-accessiblity = " \
    kmousetool \
    kontrast \
"