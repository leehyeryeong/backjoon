#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, total = 0;
	scanf("%d\n", &a);
	scanf("%d\n", &b);
	scanf("%d", &c);

	if (a == b && b == c) {
		total += 10000 + a * 1000;
	}
	else if (a == b) {
		total += 1000 + a * 100;
	}
	else if (b == c) {
		total += 1000 + b * 100;
	}
	else if (c == a) {
		total += 1000 + c * 100;
	}
	else {
		if (a > b && a > c) {
			total += a * 100;
		}
		else if(b > a && b > c) {
			total += b * 100;
		}
		else {
			total += c * 100;
		}
	}

	printf("%d", total);

	return 0;
}