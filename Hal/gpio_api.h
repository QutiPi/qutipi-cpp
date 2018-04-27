#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <fcntl.h>
#include <sys/mman.h>

#include <device.h>

#include <Hal/pin_map.h>

#ifdef __cplusplus
extern "C" {
#endif

    // Pin map will provide the following variables
    extern uint32_t * pinmap;
    extern unsigned int gpio_base;

    //Check the pin was not initialized with NC
    int gpio_is_connected(const gpio_t *obj);

    // Init the gpio pin
    void gpio_init(gpio_t *obj, PinName pin);

    // Set the pin mode (Up, Down, None)
    void gpio_mode(gpio_t *obj, PinMode mode);

    // Set if the pin is an input or output
    void gpio_func(gpio_t *obj, FunctionSelect pin);

    // Read value from the gpio pin
    int gpio_read(gpio_t *obj);

    // Write value to the gpio pin
    void gpio_write(gpio_t *obj, int value);

#ifdef __cplusplus
}
#endif
