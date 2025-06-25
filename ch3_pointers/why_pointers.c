typedef struct coordinate {
  int x;
  int y;
  int z;
} coordinate_t;

void coordinate_update_x(coordinate_t coord, int new_x) {
  coord.x = new_x;
}

coordinate_t coordinate_update_and_return_x(coordinate_t coord, int new_x) {
  coord.x = new_x;
  return coord;
}

coordinate_t new_coordinate(int x, int y, int z) {
  return (coordinate_t){.x = x, .y = y, .z = z};
}

int main() {
  coordinate_t old = new_coordinate(1, 2, 3);
  coordinate_update_x(old, 4); // .x still 1
  
  coordinate_t new = coordinate_update_and_return_x(old, 4); // .x in old still 1. .x in new is now 4.
}
