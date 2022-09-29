#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ordinal_squence(int n) {
	if (n < 100) {
		printf("%d", n);
	}
	else {
		int cnt = 99;
		int a, b, c;

		for (int i = 100; i <= n; i++) {
			a = i / 100;
			b = i / 10 % 10;
			c = i % 10;
			if ((c - b) == (b - a)) {
				cnt++;
			}
		}
		printf("%d", cnt);
 	}
}
int main() {
	int n;
	scanf("%d", &n);

	ordinal_squence(n);

	return 0;
}