#include "l5_snekstack.h"
#include "stdlib.h"

void scary_double_push(stack_t *s) {
    stack_push(s, (void *)1337);
    int *heap = malloc(sizeof(int));
    *heap = 1024;
    stack_push(s, (void *)heap);
}
