#include <stdlib.h>

#include "l2_exercise.h"

token_t** create_token_pointer_array(token_t* tokens, size_t count) {
  token_t** token_pointers = malloc(count * sizeof(token_t*));
  if (token_pointers == NULL) {
    exit(1);
  }
  for (size_t i = 0; i < count; ++i) {
    token_t* token_pointer = malloc(sizeof(token_t));
    token_pointers[i] = token_pointer;
    *token_pointer = tokens[i];  
  }
  return token_pointers;
}
