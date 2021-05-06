SUMMARY = "Task to add multimedia related packages"
LICENSE = "MIT"
PR = "r24"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup

MULTIMEDIA = " \
    amsdk-av-files \
"

MULTIMEDIA_omapl138 = ""

MULTIMEDIA_append_keystone = " \
    hevc-arm-decoder \
"

DUAL_CAMERA_DEMO = "${@bb.utils.contains('MACHINE_FEATURES', 'gpu', 'dual-camera-demo', '', d)}"

MULTIMEDIA_append_ti43x = " \
    ${DUAL_CAMERA_DEMO} \
    image-gallery \
"

MULTIMEDIA_append_omap-a15 = " \
    ${DUAL_CAMERA_DEMO} \
    image-gallery \
"

MULTIMEDIA_append_dra7xx = " \
    vis \
    hevc-arm-decoder \
"

MULTIMEDIA_append_omap5-evm = " \
    abefw \
"

ACCEL_MM = ""

ACCEL_MM_append_omap-a15 = " \
    ipumm-fw \
"

RDEPENDS_${PN} = "\
    packagegroup-arago-gst \
    ${MULTIMEDIA} \
    ${@bb.utils.contains('MACHINE_FEATURES', 'mmip', '${ACCEL_MM}', '', d)} \
"
