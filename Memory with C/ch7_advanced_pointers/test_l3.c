// l3.c
#include <assert.h>
#include <stdio.h>
#include "l3_void_pointers.c"  // Your implementation file

// Test: zero out integer
void test_zero_out_integer() {
    snek_int_t integer;
    integer.value = 42;
    snek_zero_out(&integer, INTEGER);
    assert(integer.value == 0);
    printf("test_zero_out_integer passed.\n");
}

// Test: zero out float
void test_zero_out_float() {
    snek_float_t float_num;
    float_num.value = 3.14;
    snek_zero_out(&float_num, FLOAT);
    assert(float_num.value == 0.0);
    printf("test_zero_out_float passed.\n");
}

// Test: zero out bool
void test_zero_out_bool() {
    snek_bool_t boolean;
    boolean.value = 1;
    snek_zero_out(&boolean, BOOL);
    assert(boolean.value == 0);
    printf("test_zero_out_bool passed.\n");
}

// Test: zero out multiple nonzero values
void test_zero_out_nonzero_values() {
    snek_int_t integer;
    snek_float_t float_num;
    snek_bool_t boolean;

    integer.value = -100;
    float_num.value = -99.99;
    boolean.value = 255;

    snek_zero_out(&integer, INTEGER);
    snek_zero_out(&float_num, FLOAT);
    snek_zero_out(&boolean, BOOL);

    assert(integer.value == 0);
    assert(float_num.value == 0.0);
    assert(boolean.value == 0);
    printf("test_zero_out_nonzero_values passed.\n");
}

int main() {
    test_zero_out_integer();
    test_zero_out_float();
    test_zero_out_bool();
    test_zero_out_nonzero_values();
    printf("All tests passed.\n");
    return 0;
}
