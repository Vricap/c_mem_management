/*
Sometimes you have a struct that may need to reference itself, or be used recursively.

For example, consider a Node struct that can contain other Nodes. This might be useful for building a linked list or a tree:
*/

#include <stdlib.h>

typedef struct SnekObject snekobject_t;

typedef struct SnekObject {
  char *name;
  snekobject_t *child;
} snekobject_t;

snekobject_t new_node(char *name) {
  snekobject_t node = {
    .name = name,
    .child = NULL
  };
  return node;
}

int main() {
  snekobject_t child = new_node("child");
  snekobject_t parent = new_node("parent");
  parent.child = &child;
}
