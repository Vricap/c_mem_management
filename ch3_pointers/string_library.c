#include <stdio.h>
#include <string.h>

typedef struct {
  size_t length;
  char buffer[64];
} TextBuffer;

int smart_append(TextBuffer* dest, const char* src) {
  if(src == NULL) {
  	return 1;
  }
  const int MAX_BUFF = 64;
  int len = strlen(src);
  int remaining_space = MAX_BUFF - (dest->length + 1);
  
  if(len > remaining_space) {
  	strncat(dest->buffer, src, remaining_space);
  	dest->length += remaining_space;
  	return 1;
  }

  strcat(dest->buffer, src);
  dest->length += len;
  return 0;
}

int main() {
  TextBuffer dest;
  strcpy(dest.buffer, "This is a long string");
  dest.length = 21;
  const char* src = " that will fill the whole buffer and leave no space for some of the chars.";
  int result = smart_append(&dest, src);
}
