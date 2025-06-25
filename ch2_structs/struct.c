// define a struct with type definition (better)
typedef struct Coordinate1 {
  // note that in c, order of struct value matter. better from big to small size. learn more about struct padding
  int x; 
  int y;
  int z;
} coord_t;

// or like this
struct Coordinate2 {
  int x;
  int y;
  int z;	
};

int main() {
  // one way to make instance of a struct (better)
  coord_t c1 = { // using a coord_t typedef, or could use: struct Coordinate1
  c1.x = 1,
  c1.y = 2,
  c1.z = 3,
  };

  // or like this
  struct Coordinate2 c2 = {1, 2, 3};
}
