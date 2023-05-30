require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/release-service/${PV}/src/audiotube-${PV}.tar.xz \
           file://0001-pybind11-sets-incorrect-library-paths.-do-it-manuall.patch \
           "
SRC_URI[sha256sum] = "60c688ccb1ff82d66f2924984d66f5dbd91937bb8fd69cae9b81298454dc9b5e"
