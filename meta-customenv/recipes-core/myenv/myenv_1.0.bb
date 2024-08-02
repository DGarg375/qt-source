SUMMARY = "Set environment variables"
LICENSE = "MIT"
LIC_FILES_CHKSUM="file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://myenv file://myenv.sh"

S="${WORKDIR}"

inherit update-rc.d

INITSCRIPT_NAME="myenv"
INITSCRIPT_PARAMS="start 90 S . stop 60 S ."

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/myenv.sh ${D}${bindir}/myenv.sh
    
    install -d ${D}${sysconfdir}/profile.d
    install -m 0755 ${S}/myenv.sh ${D}${sysconfdir}/profile.d/myenv.sh

    install -d ${D}${sysconfdir}/init.d
    install -m 0755 ${S}/myenv ${D}${sysconfdir}/init.d/myenv
}

FILES:${PN} += "${sysconfdir}/init.d/myenv ${bindir}/myenv.sh ${sysconfdir}/profile.d/myenv.sh"
