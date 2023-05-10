require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/release-service/23.04.0/src/audiotube-23.04.0.tar.xz \
           file://0001-pybind11-sets-incorrect-library-paths.-do-it-manuall.patch \
           "
SRC_URI[sha256sum] = "b122b887e0c87a3bb9779e322f35c4beb548a4457d4dc8a4ad64fc26955e9d51"
