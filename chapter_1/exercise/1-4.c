#include <stdio.h>
#include <math.h>

int main() {
	int n;
	const double pi = acos(-1.0); 
	float cosresult, sinresult;
	scanf("%d", &n);
	cosresult = cos(n / 180 * pi);
	sinresult = sin(n / 180 * pi);
	printf("%.3f %.3f\n", cosresult, sinresult);
	return 0;
}