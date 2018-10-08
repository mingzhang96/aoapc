#include <stdio.h>
#include <math.h>

/*
虽然做了四舍五入，但是对于四舍五入需要进位的没处理
*/
int main() {
	long a, b;
	int c;
	scanf("%d%d%d", &a, &b, &c);
	if (a == 0 && b == 0 && c == 0) {
		return 0;
	} else if (b == 0) {
		printf("%s\n", "No answer");
	} else {
		int x = a / b;
		printf("%d.", x);
		a = (a % b) * 10;
		for (int i = 0; i < c; i++) {
			x = a / b;
			if (i != c-1) {
				printf("%d", x);
			}
			a = (a % b) * 10;
		}
		int y = a / b;
		if (y >= 5) {
			x += 1;
		}
		printf("%d\n", x);
	}
	return 0;
}
