// l5.c
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "l5_swapping_strings.c" // Your implementation

// Test: swapping two different strings
void test_swap_str() {
    char *a = "Hello";
    char *b = "Goodbye";

    swap_strings(&a, &b);

    assert(strcmp(a, "Goodbye") == 0);
    assert(strcmp(b, "Hello") == 0);
    printf("test_swap_str passed.\n");
}

// Test: swapping longer strings
void test_swap_str_long() {
    char *a = "terminal.shop";
    char *b = "ssh";

    swap_strings(&a, &b);

    assert(strcmp(a, "ssh") == 0);
    assert(strcmp(b, "terminal.shop") == 0);
    printf("test_swap_str_long passed.\n");
}

int main() {
    test_swap_str();
    test_swap_str_long();
    printf("All tests passed.\n");
    return 0;
}
