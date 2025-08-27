#include "snekobject.h"

void snek_object_free(snek_object_t *obj) {
  switch (obj->kind) {
    case INTEGER:
    case FLOAT:
      break;
    case STRING:
      break;
    case VECTOR3: {
      break;
    }
    case ARRAY: {
      break;
    }
  }
  free(obj);
}
