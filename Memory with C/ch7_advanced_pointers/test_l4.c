// l4.c
#include <assert.h>
#include <stdio.h>
#include "l4_swapping_integers.c"  // Your implementation

// Test: swapping two different integers
void test_swap_ints() {
    int a = 5;
    int b = 6;

    swap_ints(&a, &b);

    assert(a == 6);
    assert(b == 5);
    printf("test_swap_ints passed.\n");
}

// Test: swapping an integer with itself
void test_swap_ints_same() {
    int a = 5;

    swap_ints(&a, &a);

    assert(a == 5);
    printf("test_swap_ints_same passed.\n");
}

int main() {
    test_swap_ints();
    test_swap_ints_same();
    printf("All tests passed.\n");
    return 0;
}
