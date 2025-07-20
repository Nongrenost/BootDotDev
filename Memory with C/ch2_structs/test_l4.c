
#include <assert.h>
#include <stdio.h>
#include "l4_coord.h"

void test_new_coordinate(void) {
    coordinate_t c = new_coord(1, 2, 3);

    assert(c.x == 1 && "should set x");
    assert(c.y == 2 && "should set y");
    assert(c.z == 3 && "should set z");

    printf("test_new_coordinate passed\n");
}

void test_scale_coordinate(void) {
    coordinate_t c = new_coord(1, 2, 3);
    coordinate_t scaled = scale_coordinate(c, 2);

    assert(scaled.x == 2 && "should scale x");
    assert(scaled.y == 4 && "should scale y");
    assert(scaled.z == 6 && "should scale z");

    printf("test_scale_coordinate passed\n");
}

int main(void) {
    test_new_coordinate();
    test_scale_coordinate();

    printf("All tests passed.\n");
    return 0;
}
