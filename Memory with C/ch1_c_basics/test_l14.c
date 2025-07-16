#include <stdio.h>
#include <assert.h>
#include <math.h>  // for fabsf

#include "l14_exercise.h"  // This must define get_average(int, int, int)

#define EPSILON 0.0001f

void assert_float_equal(float a, float b, const char *msg) {
    if (fabsf(a - b) > EPSILON) {
        fprintf(stderr, "Assertion failed: %s | Expected %.5f, got %.5f\n", msg, b, a);
        assert(0);
    }
}

// Test: Average of 3, 4, 5
void test_get_average() {
    float result = get_average(3, 4, 5);
    assert_float_equal(result, 4.0f, "Average of 3, 4, 5 is 4");
}

// Test: Non-integer average
void test_non_integer() {
    float result = get_average(3, 3, 5);
    assert_float_equal(result, 11.0f / 3.0f, "Average of 3, 3, 5 is 3.66667");
}

// Test: Average of the same number
void test_average_of_same() {
    float result = get_average(10, 10, 10);
    assert_float_equal(result, 10.0f, "Average of 10s is 10");
}

// Test: Average of large numbers
void test_average_of_big_numbers() {
    float result = get_average(1050, 2050, 2075);
    assert_float_equal(result, 1725.0f, "Bigger numbers can still get averaged");
}

int main() {
    test_get_average();
    test_non_integer();
    test_average_of_same();
    test_average_of_big_numbers();

    printf("All tests passed successfully!\n");
    return 0;
}
