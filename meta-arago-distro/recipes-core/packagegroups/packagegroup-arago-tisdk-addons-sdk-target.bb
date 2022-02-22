DESCRIPTION = "Task to install headers and libraries related to addons into the SDK"
LICENSE = "MIT"
PR = "r44"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup

UTILS = " \
	libdrm-dev \
	open62541-dev \
	open62541-staticdev \
	python3-numpy \
"

UTILS_append_ti33x = " can-utils-dev"
UTILS_append_ti43x = " can-utils-dev"
UTILS_append_dra7xx = " can-utils-dev \
                        elfutils-dev \
                        elfutils-staticdev \
"
UTILS_append_k3 = "\
	can-utils-dev \
	ti-rpmsg-char-dev \
	ti-rpmsg-char-staticdev \
"

EXTRA_LIBS = ""
EXTRA_LIBS_append_ti43x = "\
    cmem-dev \
    cmem-staticdev \
"
EXTRA_LIBS_append_omap-a15 = " cmem-dev"
EXTRA_LIBS_append_dra7xx = " libulm-dev \
                             libulm-staticdev \
                             gdbserver-c6x-dev \
"

PDM_ANOMALY_PKG_DEV = "\
    ${@bb.utils.contains('MACHINE_FEATURES', 'gpu', 'pdm-anomaly-detection-dev', '', d)} \
"


EXTRA_PACKAGES = ""
EXTRA_PACKAGES_append_ti33x = " \
                                arm-compute-library-dev \
                                tensorflow-lite-dev \
                                tensorflow-lite-staticdev \
                                ${PDM_ANOMALY_PKG_DEV} \
"
EXTRA_PACKAGES_append_ti43x = " \
                                arm-compute-library-dev \
                                tensorflow-lite-dev \
                                tensorflow-lite-staticdev \
                                ${PDM_ANOMALY_PKG_DEV} \
"
EXTRA_PACKAGES_append_omap-a15 = " \
                                arm-compute-library-dev \
                                tensorflow-lite-dev \
                                tensorflow-lite-staticdev \
                                ${PDM_ANOMALY_PKG_DEV} \
"
EXTRA_PACKAGES_append_am65xx = " arm-compute-library-dev \
                             tensorflow-lite-dev \
                             tensorflow-lite-staticdev \
                             ${PDM_ANOMALY_PKG_DEV} \
"

IPCDEV = " \
	ti-ipc-dev \
	ti-ipc-staticdev \
"

EXTRA_PACKAGES_append_omap-a15 = " ${IPCDEV}"
EXTRA_PACKAGES_append_omapl138 = " ${IPCDEV}"

RDEPENDS_${PN} = "\
    ${UTILS} \
    ${EXTRA_LIBS} \
    ${EXTRA_PACKAGES} \
"
