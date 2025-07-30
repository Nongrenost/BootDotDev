#include <stdlib.h>

#include "l16_forward_declaration.h"

snekobject_t new_node(char *name) {
  snekobject_t node = {
    .name = name,
    .child = NULL
  };
  return node;
}
