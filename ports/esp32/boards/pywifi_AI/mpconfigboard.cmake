set(IDF_TARGET esp32s3)

set(SDKCONFIG_DEFAULTS
    boards/sdkconfig.base
    boards/sdkconfig.ble
    boards/sdkconfig.usb
    boards/sdkconfig.240mhz
    boards/sdkconfig.spiram_sx
    boards/sdkconfig.spiram_oct
    boards/pywifi_AI/sdkconfig.board
)

set(MICROPY_PORT_PICLIB y) #picture
set(MICROPY_PORT_EN_ESPAI y) #AI
set(MICROPY_PORT_CAMLIB y) #CAM
