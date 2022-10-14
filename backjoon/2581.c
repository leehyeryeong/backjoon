#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int m, n, min, sum = 0;
	scanf("%d\n", &m);
	scanf("%d", &n);

	for (int i = m; i < n + 1; i++) {
		if (i == 1) continue;
		int j;
		for (j = 2; j < i; j++) {
			if (i % j == 0) break;
		}
		if (j == i) {
			if (sum == 0) min = i;
			sum += i;
		}
	}

	if (sum == 0) {
		printf("%d\n", -1);
	}
	else {
		printf("%d\n", sum);
		printf("%d", min);
	}

	return 0;
}