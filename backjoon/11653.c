#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int a = 2;
	scanf("%d", &n);

	while (1) {
		if (n == 1) break;
		if (n % a == 0) {
			n /= a;
			printf("%d\n", a);
		}
		else {
			a++;
		}
	}

	return 0;
}