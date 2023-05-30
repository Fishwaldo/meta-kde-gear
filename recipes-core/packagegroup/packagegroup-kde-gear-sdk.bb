DESCRIPTION = "KDE Gear SDK Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-sdk \
"
RDEPENDS:packagegroup-kde-gear-sdk = " \
    cervisia \
    kapptemplate \
    kcachegrind \
    kdesdk-kio \
    kdesdk-thumbnailers \
    kirigami-gallery \
    kompare \
    lokalize \
    poxml \
"