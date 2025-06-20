#include "exercise.h"
#include <stdio.h>

codefile_t change_filetype(codefile_t *f, int new_filetype){
  codefile_t new_f = *f;
  new_f.filetype = new_filetype;
  printf("\n%p %p\n", f, &new_f);
  return new_f;
}
