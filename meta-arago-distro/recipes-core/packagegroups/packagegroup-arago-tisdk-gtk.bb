DESCRIPTION = "Task to add Gtk embedded related packages"
LICENSE = "MIT"
PR = "r2"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup machine_features_check

REQUIRED_MACHINE_FEATURES = "gpu"

RDEPENDS_${PN} = "\
    gtk+3 \
    gtk+3-demo \
"
