#include <stdio.h>

struct Coordinate {
  int x;
  int y;
  int z;
};

struct Coordinate new_coord(int x, int y, int z) {
  struct Coordinate coord = {.x = x, .y = y, .z = z};
  return coord;
}

struct Coordinate scale_coordinate(struct Coordinate coord, int factor) {
  coord.x *= factor;
  coord.y *= factor;
  coord.z *= factor;
  return coord;
}

int main() {
  struct Coordinate c1;
  c1.x = 1;
  c1.y = 2;
  c1.z = 3;

  struct Coordinate c2 = new_coord(1, 2, 3);
  struct Coordinate scaled = scale_coordinate(c1, 2);
  
}
