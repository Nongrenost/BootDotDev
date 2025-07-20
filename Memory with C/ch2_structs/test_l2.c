
#include <assert.h>
#include <stdio.h>
#include "l2_coord.h"  

void test_new_coordinate1(void) {
    struct Coordinate c = new_coord(1, 2, 3);

    assert(c.x == 1 && "should set x");
    assert(c.y == 2 && "should set y");
    assert(c.z == 3 && "should set z");

    printf("test_new_coordinate1 passed\n");
}

void test_new_coordinate2(void) {
    struct Coordinate c = new_coord(4, 2, 0);

    assert(c.x == 4 && "should set x");
    assert(c.y == 2 && "should set y");
    assert(c.z == 0 && "should set z");

    printf("test_new_coordinate2 passed\n");
}

int main(void) {
    test_new_coordinate1();
    test_new_coordinate2();

    printf("All tests passed.\n");
    return 0;
}
