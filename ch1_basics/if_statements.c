#include <stdio.h>

char *get_temperature_status(int temp) {
    if(temp < 70) {
      return "too cold";
    } else if(temp > 90) {
      return "too hot";
    } else {
      return "just right";
    }
}

int main() {
	char *status = get_temperature_status(80);

	printf("%s\n", status);
}
