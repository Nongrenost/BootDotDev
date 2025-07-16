#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "l16_header.h"

void test_cold() {
    char *result = get_temperature_status(50);
    assert(strcmp(result, "too cold") == 0 && "50 should be too cold");
    printf("test_cold passed.\n");
}

void test_hot() {
    char *result = get_temperature_status(100);
    assert(strcmp(result, "too hot") == 0 && "100 should be too hot");
    printf("test_hot passed.\n");
}

void test_just_right() {
    char *result = get_temperature_status(70);
    assert(strcmp(result, "just right") == 0 && "70 should be just right");
    printf("test_just_right passed.\n");
}

void test_just_right2() {
    char *result = get_temperature_status(75);
    assert(strcmp(result, "just right") == 0 && "75 should be just right");
    printf("test_just_right2 passed.\n");
}

int main() {
    test_cold();
    test_hot();
    test_just_right();
    test_just_right2();
    printf("All tests passed.\n");
    return 0;
}
