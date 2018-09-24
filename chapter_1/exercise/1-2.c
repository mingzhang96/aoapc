#include <stdio.h>

int main() {
	int f;
	float c;
	scanf("%d", &f);
	c = 5.0 * (f - 32) / 9.0;
	printf("%.3f\n", c);
	return 0;
}