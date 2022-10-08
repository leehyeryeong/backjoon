#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, num[1000], temp = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}