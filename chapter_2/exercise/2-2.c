#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, flag = 0;
	scanf("%d%d%d", &a, &b, &c);
	for (int i = 10; i <= 100; i++) {
		if (a == i%3 && b == i%5 && c == i%7) {
			printf("%d\n", i);
			flag = 1;
		}
	}
	if (!flag) {
		printf("%s\n", "No answer");
	}
	return 0;
}
