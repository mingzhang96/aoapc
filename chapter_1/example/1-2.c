#include<stdio.h>

int main() {
	int input;
	int output = 0;
	scanf("%d", &input);
	while (input != 0) {
		output = output * 10 + input % 10;
		input = input / 10;
	}
	printf("%d\n", output);
}