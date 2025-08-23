#include "l6_snekstack.h"
#include "stdlib.h"
#include <string.h>

void stack_push_multiple_types(stack_t *s) {
  float *p_to_f = malloc(sizeof(float));
  *p_to_f = 3.14f;
  stack_push(s, (void *)p_to_f);

  char *str = "Sneklang is blazingly slow!";
  char *p_to_str = malloc(sizeof(strlen(str) + 1));
  strcopy(p_to_str, str);
  stack_push(s, (void *)p_to_str);
  
}
