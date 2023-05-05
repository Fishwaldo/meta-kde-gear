DESCRIPTION = "KDE Gear Network Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-network \
"
RDEPENDS:packagegroup-kde-gear-network = " \
    kaccounts-integration \
    kaccounts-providers \
"