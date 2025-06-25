#include <stdio.h>

void update_file(int filedata[200], int new_filetype, int new_num_lines){
  filedata[1] = new_num_lines;
  filedata[2] = new_filetype;
  filedata[199] = 0;
}

int main() {
  int filedata[200] = {0};
  for (int i = 0; i < 200; i++) {
      filedata[i] = 69;
  }
  update_file(filedata, 3, 250); // array passed by reference

  for(int i = 0; i < 200; i++) {
	printf("%d\n", filedata[i]);
  }
}
