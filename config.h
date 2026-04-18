#define WS2812_SPI_DRIVER SPID1
#define WS2812_SPI_MOSI_PAL_MODE 0
#define WS2812_SPI_SCK_PIN B5
#define WS2812_SPI_SCK_PAL_MODE 0

#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#define RGBLIGHT_LAYERS_RETAIN_VAL

// Enable kinetic mode
#define MK_KINETIC_SPEED
// Delay between pressing a movement key and cursor movement
#define MOUSEKEY_DELAY 0
// Time between cursor movements in milliseconds
#define MOUSEKEY_INTERVAL 16
// Step size for accelerating from initial to base speed
#define MOUSEKEY_MOVE_DELTA	48
// Initial speed of the cursor in pixel per second
#define MOUSEKEY_INITIAL_SPEED 200
// Maximum cursor speed at which acceleration stops
#define MOUSEKEY_BASE_SPEED 1600
// Decelerated cursor speed
#define MOUSEKEY_DECELERATED_SPEED 200
// Accelerated cursor speed
#define MOUSEKEY_ACCELERATED_SPEED 1600
// Initial number of movements of the mouse wheel
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 8
// Maximum number of movements at which acceleration stops
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 64
// Accelerated wheel movements
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 64
// Decelerated wheel movements
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8

// // Delay between pressing a movement key and cursor movement
// #define MOUSEKEY_DELAY 0
// // Time between cursor movements in milliseconds
// #define MOUSEKEY_INTERVAL 16
// // Step size
// #define MOUSEKEY_MOVE_DELTA 8
// // Maximum cursor speed at which acceleration stops
// #define MOUSEKEY_MAX_SPEED 3
// // Time until maximum cursor speed is reached
// #define MOUSEKEY_TIME_TO_MAX 20
// // Delay between pressing a wheel key and wheel movement
// #define MOUSEKEY_WHEEL_DELAY 0
// // Time between wheel movements
// #define MOUSEKEY_WHEEL_INTERVAL 16
// // Wheel movement step size
// #define MOUSEKEY_WHEEL_DELTA 1
// // Maximum number of scroll steps per scroll action
// #define MOUSEKEY_WHEEL_MAX_SPEED 1
// // Time until maximum scroll speed is reached
// #define MOUSEKEY_WHEEL_TIME_TO_MAX 40