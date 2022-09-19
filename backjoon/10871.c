#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, x, a = 0;
	scanf("%d %d\n", &n, &x);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);

		if (a < x) {
			printf("%d ", a);
		}
	}

	return 0;
}