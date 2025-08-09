#include <stdio.h>
#include <stdlib.h>

#include "l6_exercise.h"

int *allocate_scalar_array(int size, int multiplier) {
  int *new_array = (int*)malloc(size * sizeof(int));
  if (new_array == NULL) {
    return NULL;
  }
  for(int i = 0; i < size; i++) {
    new_array[i] = i * multiplier;
  }
  return new_array;
}
