DESCRIPTION = "KDE Gear Packages"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear \
"
RDEPENDS:packagegroup-kde-gear = " \
    packagegroup-kde-gear-pim \
    packagegroup-kde-gear-development \
    packagegroup-kde-gear-network \
"