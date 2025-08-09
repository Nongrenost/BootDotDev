// l5.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <stdint.h>

#include "l5_the_heap.c" // Include the implementation under test

// Helper function to check if a pointer is on the stack
bool is_on_stack(void *ptr) {
    void *stack_top = __builtin_frame_address(0);
    uintptr_t stack_top_addr = (uintptr_t)stack_top;
    uintptr_t ptr_addr = (uintptr_t)ptr;

    // Check within a small threshold (1KB) in both directions
    uintptr_t threshold = 1024;
    return ptr_addr >= (stack_top_addr - threshold) &&
           ptr_addr <= (stack_top_addr + threshold);
}

void test_basic_greeting(void) {
    char *result = get_full_greeting("Hello", "Alice", 20);
    assert(strcmp(result, "Hello Alice") == 0 && "Basic greeting should be correct");
    assert(!is_on_stack(result) && "Result should not be on the stack");
    free(result);
}

void test_short_buffer(void) {
    char *result = get_full_greeting("Hey", "Bob", 4);
    assert(strcmp(result, "Hey") == 0 && "Should truncate to fit buffer");
    assert(!is_on_stack(result) && "Result should not be on the stack");
    free(result);
}

int main(void) {
    printf("Running tests...\n");

    test_basic_greeting();
    printf("test_basic_greeting passed.\n");

    test_short_buffer();
    printf("test_short_buffer passed.\n");

    printf("All tests passed!\n");
    return 0;
}
