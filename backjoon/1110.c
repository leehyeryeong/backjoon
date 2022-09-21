#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, initial = 0;
	int count = 0;
	scanf("%d", &n);
	initial = n;

	while (1) {
		n = (n / 10 + n % 10) % 10 + ((n % 10) * 10);
		count++;
		if (n == initial) {
			printf("%d", count);
			break;
		}
	}

	return 0;
}