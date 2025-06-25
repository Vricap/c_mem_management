#include <stdio.h>
#include <string.h>

void concat_strings(char *str1, const char *str2) {
  	while(*str1 != '\0') {
  		str1++;
  	}
	while(*str2 != '\0') {
  		*str1 = *str2;
  		str2++;
  		str1++;
  	}
  	*str1 = '\0';
}

int main() {
	char str1[100] = "Helo, World.";
  	const char *str2 = "foo bar";
    concat_strings(str1, str2);	
    printf("%s\n", str1);
	return 0;
}
