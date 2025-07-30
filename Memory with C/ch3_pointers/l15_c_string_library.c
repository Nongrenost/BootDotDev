#include <string.h>
#include "l15_exercise.h"

int smart_append(TextBuffer* dest, const char* src) {
  if (dest == NULL || src == NULL) {
    return 1;
  };
  const int max_buffer_size = 64;
  size_t string_length = strlen(src);
  size_t remaining_buffer_space = max_buffer_size - (dest->length + 1);
  if (string_length > remaining_buffer_space) {
    strncat(dest->buffer, src, remaining_buffer_space);
    dest->buffer[max_buffer_size] = '\0';
    dest->length = strlen(dest->buffer);
    return 1;
  } else {
    strcat(dest->buffer, src);
    dest->length = strlen(dest->buffer);
    return 0;
  };
}
