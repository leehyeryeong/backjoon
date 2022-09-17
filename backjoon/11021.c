#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t, a, b, sum[1000];
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		sum[i] = a + b;
	}
	
	for (int i = 0; i < t; i++) {
		printf("Case #%d: %d\n", i+1, sum[i]);
	}

	return 0;
}