/*
  (C) Nguyen Ba Ngoc 2021
*/

#include "tm.h"

int main() {
  tmt m = tm_create(gtype_cmp_s);
  tm_insert(m, gtype_s("Nguyen Van A"), gtype_i(1));
  tm_insert(m, gtype_s("Tran Van D"), gtype_i(5));
  tm_insert(m, gtype_s("Nguyen Van B"), gtype_i(3));
  tm_insert(m, gtype_s("Nguyen Van C"), gtype_i(120));
  tm_traverse(n, m) {
    printf("%s: %ld\n", n->key.s, n->value.i);
  }
  tm_free(m);
  return 0;
}