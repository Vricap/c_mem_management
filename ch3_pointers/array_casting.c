#include <stdio.h>

typedef struct Graphics {
  int fps;
  int height;
  int width;
} graphics_t;


void dump_graphics(graphics_t gsettings[10]) {
  int *ptr = (int *)gsettings; // cast the first struct in array to ints.
  for (int i = 0; i < 30; i++) {
    printf("settings[%d] = %d\n", i, ptr[i]);
  }
}

int main() {
  graphics_t graphics_array[10] = {
    {60, 1080, 1920},
    {30, 720, 1280},
    {144, 1440, 2560},
    {75, 900, 1600},
    {120, 1080, 1920},
    {60, 2160, 3840},
    {240, 1080, 1920},
    {60, 768, 1366},
    {165, 1440, 2560},
    {90, 1200, 1920}
  };
  dump_graphics(graphics_array);
  return 0;
}
