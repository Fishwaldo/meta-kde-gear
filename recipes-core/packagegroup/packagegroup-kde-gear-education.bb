DESCRIPTION = "KDE Gear education Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-education \
"
RDEPENDS:packagegroup-kde-gear-education = " \
    artikulate \
    kalgebra \
    kbruch \
    kgeography \
    khangman \
    kig \
    kiten \
    klettres \
    kmplot \
    ktouch \
    kturtle \
    kwordquiz \
    marble \
    minuet \
    parley \
    rocs \
    step \
"