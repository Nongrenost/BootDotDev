#include <stdlib.h>
#include <string.h>

#include "l4_snekobject.h"

snek_object_t *new_snek_string(char *string) {

    snek_object_t *obj = malloc(sizeof(snek_object_t));
    if (obj == NULL) { return NULL; }
    
    
    obj->kind = STRING;
    obj->data.v_string = malloc(strlen(sizeof(string + 1)));  
    if (obj->data.v_string == NULL) { free(obj); return NULL;} 
    strcpy(obj->data.v_string, string);

    return obj;
  
}

// don't touch below this line

snek_object_t *new_snek_integer(int value) {
  snek_object_t *obj = malloc(sizeof(snek_object_t));
  if (obj == NULL) {
    return NULL;
  }

  obj->kind = INTEGER;
  obj->data.v_int = value;
  return obj;
}

snek_object_t *new_snek_float(float value) {
  snek_object_t *obj = malloc(sizeof(snek_object_t));
  if (obj == NULL) {
    return NULL;
  }

  obj->kind = FLOAT;
  obj->data.v_float = value;
  return obj;
}
