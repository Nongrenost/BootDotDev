#include "l14_exercise.h"

void concat_strings(char *str1, const char *str2) {
  char *end_of_string1;
  char value_at_pointer;
  while (1) {
    value_at_pointer = *str1;
    if (value_at_pointer == '\0') {
      end_of_string1 = str1;
      break;
    };
    str1++;
  };

  char value_at_pointer2;
  while(1) {
    value_at_pointer2 = *str2;
    if (value_at_pointer2 != '\0') {
      *end_of_string1 = value_at_pointer2;
      end_of_string1++;
      str2++;
    } else {
      end_of_string1 = '\0';
      break;
    }
  }
}