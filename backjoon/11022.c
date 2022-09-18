#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t, a[100], b[100], sum[100];
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a[i], &b[i]);
		sum[i] = a[i] + b[i];
	}

	for (int i = 0; i < t; i++) {
		printf("Case #%d: %d + %d = %d\n", i + 1, a[i], b[i], sum[i]);
	}

	return 0;
}