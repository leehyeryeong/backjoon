#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char arr[100];
	int n, sum = 0;
	scanf("%d", &n);

	scanf("%s", arr);
	for (int i = 0; i < n; i++) {
		sum += arr[i] - '0';
	}

	printf("%d", sum);

	return 0;
}