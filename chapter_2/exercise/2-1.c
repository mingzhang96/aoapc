#include<stdio.h>

/*
输出100-999中的水仙花数
*/
int main() {
	int num1, num10, num100;
	for (int i = 100; i <= 999; i++) {
		num1 = i % 10;
		num10 = i / 10 % 10;
		num100 = i / 100 % 10;
		if (i == num1*num1*num1 + num10*num10*num10 + num100*num100*num100) {
			printf("%d ", i);
		}
	}
	return 0;
}