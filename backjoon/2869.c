#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, day = 0;
	scanf("%d %d %d", &a, &b, &c);

	day = (c - b - 1) / (a - b) + 1;

	printf("%d", day);

	return 0;
}