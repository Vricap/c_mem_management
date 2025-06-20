#include <stdio.h>

void print_numbers_reverse(int start, int end) {
	while(start > end-1) {
		printf("%d", start);
		start--;
	}
}
