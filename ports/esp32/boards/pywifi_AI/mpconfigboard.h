#define MICROPY_HW_BOARD_NAME               "pyWIFI"
#define MICROPY_HW_MCU_NAME                 "ESP32-S3"
#define MICROPY_PY_NETWORK_HOSTNAME_DEFAULT "pyWIFI"

#define MICROPY_PY_MACHINE_DAC              (0)

#define MICROPY_HW_I2C0_SCL                 (9)
#define MICROPY_HW_I2C0_SDA                 (8)

#define MICROPY_HW_ENABLE_UART_REPL     (1)

#define MICROPY_ENABLE_TFTLCD				(1)
#define MICROPY_HW_ESPAI				(1)
#define MICROPY_ENABLE_FACE_DETECTION	(1)
#define MICROPY_ENABLE_CAT_DETECTION	(1)
#define MICROPY_ENABLE_COLOR_DETECTION	(1)
#define MICROPY_ENABLE_CODE_RECOGNITION	(1)
#define MICROPY_ENABLE_MOTION_DETECTION	(1)
#define MICROPY_ENABLE_FACE_RECOGNITION (1)

#define MICROPY_PY_PICLIB				(1)

#define MICROPY_ENABLE_TFTLCD			(1)
#define MICROPY_STRING_SIZE_24			(1)
#define MICROPY_STRING_SIZE_32			(1)
#define MICROPY_STRING_SIZE_48			(1)

#define MICROPY_HW_LCD32				(1)	
#define MICROPY_HW_LCD15				(1)	
#define MICROPY_HW_LCD18				(1)	

#define LCD_PIN_DC						(48)
#define LCD_PIN_RST						(38)
#define LCD_PIN_CS						(39)
#define LCD_PIN_CLK						(40)
#define LCD_PIN_MISO					(41)
#define LCD_PIN_MOSI					(42)