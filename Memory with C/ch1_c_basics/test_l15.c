#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "l15_header.h"

#define EPSILON 0.0001

void test_snek_score_1() {
    float result = snek_score(3, 4, 5, 0.1);
    assert(fabs(result - 1.9) < EPSILON && "test_snek_score_1 failed: result must be 1.9");
    printf("test_snek_score_1 passed.\n");
}

void test_snek_score_2() {
    float result = snek_score(10, 10, 10, 0.1);
    assert(fabs(result - 11.0) < EPSILON && "test_snek_score_2 failed: result must be 11.0");
    printf("test_snek_score_2 passed.\n");
}

void test_snek_score_3() {
    float result = snek_score(105, 205, 207, 0.1);
    assert(fabs(result - 2194.0) < EPSILON && "test_snek_score_3 failed: result must be 2194.0");
    printf("test_snek_score_3 passed.\n");
}

int main() {
    test_snek_score_1();
    test_snek_score_2();
    test_snek_score_3();
    printf("All tests passed.\n");
    return 0;
}
