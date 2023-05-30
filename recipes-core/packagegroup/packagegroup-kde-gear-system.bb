DESCRIPTION = "KDE Gear System Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-system \
"
RDEPENDS:packagegroup-kde-gear-system = " \
    dolphin \
    dolphin-plugins \
    kjournald \
    ksystemlog \
    kcron \
    kde-inotify-survey \
    khelpcenter \
    kio-admin \
    kpmcore \
    partitionmanager \
"