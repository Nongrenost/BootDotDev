#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "l2_integer.c"   // your implementation file

// Test: positive integer
void test_positive() {
    snek_object_t *int_object = new_snek_integer(42);

    assert(int_object != NULL);
    assert(int_object->data.v_int == 42 && "must allow positive numbers");

    free(int_object);
    printf("test_positive passed\n");
}

// Test: zero
void test_zero() {
    snek_object_t *int_object = new_snek_integer(0);

    assert(int_object != NULL);
    assert(int_object->kind == INTEGER && "must be INTEGER type");
    assert(int_object->data.v_int == 0 && "must equal zero");

    free(int_object);
    printf("test_zero passed\n");
}

// Test: negative integer
void test_negative() {
    snek_object_t *int_object = new_snek_integer(-5);

    assert(int_object != NULL);
    assert(int_object->kind == INTEGER && "must be INTEGER type");
    assert(int_object->data.v_int == -5 && "must allow negative numbers");

    free(int_object);
    printf("test_negative passed\n");
}

int main() {
    printf("Running tests...\n");

    test_positive();
    test_zero();
    test_negative();

    printf("All tests passed!\n");
    return 0;
}
