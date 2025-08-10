#include <stdlib.h>
#include <assert.h>
#include "l1_pointer_pointers.c" // This should contain allocate_int()

void test_allocate(void) {
    int *pointer = NULL;
    allocate_int(&pointer, 10);

    assert(pointer != NULL && "Should allocate pointer");
    assert(*pointer == 10 && "Should assign value to pointer");

    free(pointer);
}

void test_does_not_overwrite(void) {
    int value = 5;
    int *pointer = &value;

    allocate_int(&pointer, 20);

    assert(value == 5 && "Should not overwrite original value");
    assert(pointer != NULL && "Should allocate pointer");
    assert(*pointer == 20 && "Should assign value to pointer");

    free(pointer);
}

int main(void) {
    test_allocate();
    test_does_not_overwrite();
    return 0;
}
