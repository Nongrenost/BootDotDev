#pragma once

typedef struct SneklangVar {
  int scope_level;
  int value;
  char *name;
  char type;
  char is_constant;
} sneklang_var_t;
