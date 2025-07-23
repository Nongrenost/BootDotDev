#include "l6_header.h"

codefile_t change_filetype(codefile_t *filepointer, int new_filetype){
  codefile_t new_f = *filepointer;
  new_f.filetype = new_filetype;
  return new_f;
}