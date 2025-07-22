#include <assert.h>
#include <stdio.h>
#include "l6_struct_padding.h"

void test_optimal_size() {
    size_t expected_size = 16;
    size_t actual_size = sizeof(sneklang_var_t);

    printf("Testing sizeof(sneklang_var_t): expected %zu, got %zu\n",
           expected_size, actual_size);

    assert(actual_size == expected_size && "Size mismatch: sneklang_var_t should be 16 bytes.");
}

int main(void) {
    test_optimal_size();
    printf("All tests passed.\n");
    return 0;
}