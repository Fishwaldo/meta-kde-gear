DESCRIPTION = "KDE Gear Mobile Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-mobile \
"
RDEPENDS:packagegroup-kde-gear-mobile = " \
    angelfish \
    kclock \
    qmlkonsole \
"