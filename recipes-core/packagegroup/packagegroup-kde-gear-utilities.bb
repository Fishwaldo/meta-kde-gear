DESCRIPTION = "KDE Gear Utility Packages"

PACKAGE_ARCH = "${TUNE_PKGARCH}"

inherit packagegroup

PACKAGES = " \
    packagegroup-kde-gear-utilities \
"
RDEPENDS:packagegroup-kde-gear-utilities = " \
    print-manager \
    kate \
    kcalc \
    kwalletmanager \
    ark \
    filelight \
    kalk \
    kbackup \
    kcharselect \
    kdf \
    kdialog \
    keditbookmarks \
    keysmith \
    kfind \
    kgpg \
    konsole \
    kongress \
    krecorder \
    kteatime \
    ktimer \
    ktrip \
    markdownpart \
    skanpage \
    sweeper \
    okteta \
    yakuake \
"