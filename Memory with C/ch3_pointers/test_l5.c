#include <assert.h>
#include <stdio.h>
#include "l5_header.h"

coordinate_t new_coordinate(int x, int y, int z) {
  return (coordinate_t){.x = x, .y = y, .z = z};
}

void test_unchanged() {
    coordinate_t old = new_coordinate(1, 2, 3);
    assert(old.x == 1 && "old.x must be 1");

    coordinate_update_x(old, 4);
    assert(old.x == 1 && "old.x must still be 1");

    printf("test_unchanged passed.\n");
}

void test_changed() {
    coordinate_t old = new_coordinate(1, 2, 3);
    assert(old.x == 1 && ".x must be 1");

    coordinate_t new = coordinate_update_and_return_x(old, 4);
    assert(new.x == 4 && "new .x must be 4");
    assert(old.x == 1 && "old.x must still be 1");

    // Compare addresses of value copies
    assert(&old != &new && "Must be different addresses (structs copied by value)");

    printf("test_changed passed.\n");
}

int main(void) {
    test_unchanged();
    test_changed();
    printf("All tests passed.\n");
    return 0;
}
