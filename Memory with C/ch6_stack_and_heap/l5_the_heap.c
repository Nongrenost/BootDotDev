#include <stdio.h>
#include <stdlib.h>
#include "l5_exercise.h"

char *get_full_greeting(char *greeting, char *name, int size) {
  char *full_greeting = (char*)malloc(size);
  snprintf(full_greeting, size, "%s %s", greeting, name);
  return full_greeting;
}
