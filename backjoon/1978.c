#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, num, cnt = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		for (int j = 2; j <= num; j++) {
			if (num == j) cnt++;
			if (num % j == 0) break;
		}
	}

	printf("%d", cnt);

	return 0;
}