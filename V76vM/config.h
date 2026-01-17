#undef TAPPING_TERM
#define TAPPING_TERM 400

#define RETRO_TAPPING

#define PERMISSIVE_HOLD

#define QUICK_TAP_TERM 0

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 100

#define SERIAL_NUMBER "V76vM/nldwA0"
#define LAYER_STATE_8BIT
#define COMBO_COUNT 3
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define RGB_MATRIX_STARTUP_SPD 60

