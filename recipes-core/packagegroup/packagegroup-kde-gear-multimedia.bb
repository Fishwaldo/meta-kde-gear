DESCRIPTION = "KDE Gear Multimedia Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-multimedia \
"
RDEPENDS:packagegroup-kde-gear-multimedia = " \
    audiotube \
    dragon \
    elisa \
    plasmatube \
    phonon-backend-vlc \
    ffmpegthumbs \
    juk \
    k3b \
    kamoso \
    kasts \
    kdenlive \
    frei0r \
    kmix \
    kwave \
"