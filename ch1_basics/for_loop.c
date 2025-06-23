#include <stdio.h>

void print_numbers(int start, int end) {
	for(int i = start; i < end+1; i++) {
		printf("%d\n", i);
	}
}

void test(int start, int end){
  printf("Printing from %d to %d:\n", start, end);
  print_numbers(start, end);
  printf("======================\n");
}

int main() {
  test(42, 69);
}
