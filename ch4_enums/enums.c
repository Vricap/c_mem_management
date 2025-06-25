typedef enum Color {
	RED, // 0 ...
	GREEN, // if you want to set custom value, use GREEN = <int>
	BLUE,
} color_t;

// use enum with typedef
typedef struct Graphic1 {
  char *title;
  color_t color;
} graphic1_t;

// Or if you don't want to use the alias:
typedef struct Graphic2 {
  char *title;
  enum Color color;
} graphic2_t;

int main() {
	graphic1_t foo = {"bar", RED};
	graphic1_t foo1 = {"bar", 0}; // since enum value actually just integer
}
