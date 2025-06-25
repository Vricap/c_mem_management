#include <stdio.h>

struct Coordinate {
  int x;
  int y;
  int z;
};

struct Coordinate new_coord(int x, int y, int z) {
  struct Coordinate coord = {
  	.x = x,
  	.y = y,
  	.z = z
  };
  return coord;
}

int main() {
	struct Coordinate c = new_coord(4, 2, 0);
	printf("x: %d | y: %d | z: %d\n", c.x, c.y, c.z);
}
