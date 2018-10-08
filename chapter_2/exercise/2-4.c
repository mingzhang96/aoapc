#include <stdio.h>
#include <math.h>

int main() {
	long n, m;
	double sum = 0;
	scanf("%d%d", &n, &m);
	if (m == 0 && n == 0) {
		return 0;
	} else if (m == 0 || n == 0) {
		printf("%s\n", "No answer");
	} else {
		for (long i = n; i <= m; i++) {
			sum += 1.0/(i*i);
		}
		printf("%0.5f\n", sum);
	}
	return 0;
}
