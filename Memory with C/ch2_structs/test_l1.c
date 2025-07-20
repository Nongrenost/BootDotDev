#include <assert.h>
#include <stdio.h>
#include "l1_structs.c"

void test_new_coordinate1(void) {
    struct Coordinate c;
    c.x = 1;
    c.y = 2;
    c.z = 3;

    assert(c.x == 1 && "should set x");
    assert(c.y == 2 && "should set y");
    assert(c.z == 3 && "should set z");

    printf("test_new_coordinate1 passed\n");
}

void test_new_coordinate2(void) {
    struct Coordinate c;
    c.x = 4;
    c.y = 2;
    c.z = 0;

    assert(c.x == 4 && "should set x");
    assert(c.y == 2 && "should set y");
    assert(c.z == 0 && "should set z");

    printf("test_new_coordinate2 passed\n");
}

void test_new_coordinate3(void) {
    struct Coordinate c;
    c.x = 10;
    c.y = 20;
    c.z = 30;

    assert(c.x == 10 && "should set x");
    assert(c.y == 20 && "should set y");
    assert(c.z == 30 && "should set z");

    printf("test_new_coordinate3 passed\n");
}

void test_new_coordinate4(void) {
    struct Coordinate c;
    c.x = 0;
    c.y = 6;
    c.z = 9;

    assert(c.x == 0 && "should set x");
    assert(c.y == 6 && "should set y");
    assert(c.z == 9 && "should set z");

    printf("test_new_coordinate4 passed\n");
}

int main(void) {
    test_new_coordinate1();
    test_new_coordinate2();
    test_new_coordinate3();
    test_new_coordinate4();

    printf("All tests passed.\n");
    return 0;
}
