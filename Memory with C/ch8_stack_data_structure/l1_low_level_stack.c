#include "l1_snekstack.h"
#include <stdlib.h>

stack_t *stack_new(size_t capacity) {
    stack_t *stack = malloc(sizeof(stack_t));
    if (stack == NULL) { return NULL; }

    void **data_pointer = malloc(sizeof(void*) * capacity);
    if (data_pointer == NULL) {
        free(stack);
        return NULL; }

    stack->count = 0;
    stack->capacity = capacity;
    stack->data = data_pointer;
    return stack;
}
