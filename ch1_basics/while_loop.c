#include <stdio.h>
void print_numbers_reverse(int start, int end) {
	while(start > end-1) {
		printf("%d\n", start);
		start--;
	}
}

void test(int start, int end){
  printf("Printing from %d to %d:\n", start, end);
  print_numbers_reverse(start, end);
  printf("======================\n");
}

int main() {
  test(20, 4);
}
