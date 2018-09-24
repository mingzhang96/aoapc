#include <stdio.h>

int main() {
	int year;
	scanf("%d", &year);
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		printf("%s\n", "yes");
	} else {
		printf("%s\n", "no");
	}
}