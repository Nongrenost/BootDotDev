void swap_strings(char **a, char **b) {
  char *temp_pointer = *a;
  *a = *b;
  *b = temp_pointer;
}
