#include <stdio.h>

int main() {
	int n;
	float result;
	scanf("%d", &n);
	result = n * 95;
	if (result >= 300) {
		result *= 0.85;
	}
	printf("%.3f\n", result);
}