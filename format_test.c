#include "template.h"

#include <stdint.h>

#define PIN_LED    (1)
#define PORT_LED   (1)
#define PORT_LED_2 (1)

typedef enum {
    E_TEST_ENUM_TEST_1,
    E_TEST_ENUM_TEST_2,
    E_TEST_ENUM_TEST_2
} e_test_enum_t;

int32_t sum(int32_t a, int32_t b) {
    return a + b;
}

int32_t test(int32_t a, int32_t b) {

    size_t   i;
    uint64_t data;

    while (1) {}

    i    = 0;
    data = 140;
    while (i < 10) {
        i = i * i;
        ++i;
    }

    return a + b;
}