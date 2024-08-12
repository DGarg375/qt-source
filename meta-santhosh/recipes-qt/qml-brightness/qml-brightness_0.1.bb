SUMMARY = "QT QML Test Recipe"
LICENSE = "CLOSED"
PR = "Brightness"

# SRCREV="${AUTOREV}"

SRC_URI = "file://CMakeLists.txt	     \
           file://main.cpp              \
           file://Main_Brightness.qml              "

DEPENDS += " qtbase \
             qtdeclarative-native \
             qtquick3d \
           "

S = "${WORKDIR}"

# Manually add this file, must be a better way!
do_install:append() {
    install -d ${D}${bindir}
    install -m 0644 ${S}/Main_Brightness.qml ${D}${bindir}
}

inherit qt6-cmake
