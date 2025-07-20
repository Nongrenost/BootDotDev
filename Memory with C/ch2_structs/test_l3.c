#include <assert.h>
#include <stdio.h>
#include "l3_coord.h" 

void test_new_coordinate(void) {
    struct Coordinate c;
    c.x = 1;
    c.y = 2;
    c.z = 3;

    assert(c.x == 1 && "should set x");
    assert(c.y == 2 && "should set y");
    assert(c.z == 3 && "should set z");

    printf("test_new_coordinate passed\n");
}

void test_scale_coordinate1(void) {
    struct Coordinate c = new_coord(1, 2, 3);
    struct Coordinate scaled = scale_coordinate(c, 2);

    assert(scaled.x == 2 && "should scale x");
    assert(scaled.y == 4 && "should scale y");
    assert(scaled.z == 6 && "should scale z");

    printf("test_scale_coordinate1 passed\n");
}

void test_scale_coordinate2(void) {
    struct Coordinate c = new_coord(4, 2, 0);
    struct Coordinate scaled = scale_coordinate(c, 2);

    assert(scaled.x == 8 && "should scale x");
    assert(scaled.y == 4 && "should scale y");
    assert(scaled.z == 0 && "should scale z");

    printf("test_scale_coordinate2 passed\n");
}

void test_original_unchanged(void) {
    struct Coordinate c = new_coord(1, 2, 3);
    struct Coordinate scaled = scale_coordinate(c, 2);

    assert(c.x == 1 && "original x should remain unchanged");
    assert(c.y == 2 && "original y should remain unchanged");
    assert(c.z == 3 && "original z should remain unchanged");

    printf("test_original_unchanged passed\n");
}

int main(void) {
    test_new_coordinate();
    test_scale_coordinate1();
    test_scale_coordinate2();
    test_original_unchanged();

    printf("All tests passed.\n");
    return 0;
}
