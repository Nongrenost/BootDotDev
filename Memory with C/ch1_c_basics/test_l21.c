#include <stdio.h>
#include "l21_header.h"

void test(int start, int end){
  printf("Printing from %d to %d:\n", start, end);
  print_numbers_reverse(start, end);
  printf("======================\n");
}

int main() {
  test(20, 4);
}
