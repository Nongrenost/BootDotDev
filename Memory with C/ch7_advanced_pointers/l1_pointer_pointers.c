#include "stdlib.h"

#include "l1_exercise.h"

void allocate_int(int **pointer_pointer, int value) {
  int *int_pointer = (int*)malloc(sizeof(int));
    *pointer_pointer = int_pointer;
    **pointer_pointer = value;
}
