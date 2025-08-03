#include <stdio.h>
#include <assert.h>
#include "l1_enums.c" 

void test_color_enum1() {
    printf("Running test_color_enum1...\n");

    assert(RED == 0);
    assert(GREEN == 1);
    assert(BLUE == 2);

    printf("test_color_enum1 passed.\n");
}

void test_color_enum2() {
    printf("Running test_color_enum2...\n");

    assert(RED != 4);
    assert(GREEN != 2);
    assert(BLUE != 0);

    printf("test_color_enum2 passed.\n");
}

int main() {
    test_color_enum1();
    test_color_enum2();

    printf("All tests passed.\n");
    return 0;
}
