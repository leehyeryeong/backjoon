#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, C;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	if (B + C < 60) {
		B += C;
		printf("%d %d", A, B);
	}
	else {
		A += (B + C) / 60;
		B = (B + C) % 60;
		if (A >= 24) {
			A -= 24;
		}
		printf("%d %d", A, B);
	}

	return 0;
}