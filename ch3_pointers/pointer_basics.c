#include <stdio.h>

typedef struct CodeFile {
  int lines;
  int filetype;
} codefile_t;

codefile_t change_filetype(codefile_t *f, int new_filetype){
  codefile_t new_f = *f; // derefence because we want to use the actual value and not the address
  new_f.filetype = new_filetype;
  printf("\n%p %p\n", f, &new_f); // address should not be the same
  return new_f;
}

int main() {
  codefile_t original;
  original.lines = 100;
  original.filetype = 1;
  codefile_t result = change_filetype(&original, 2);
  printf("From original: lines: %d, fileType: %d\n", original.lines, original.filetype);
  printf("From result: lines: %d, fileType: %d\n", result.lines, result.filetype); // lines will be differen than from original
}
