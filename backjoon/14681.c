#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y = 0;
	scanf("%d\n", &x);
	scanf("%d", &y);

	if (x > 0 && y > 0) {
		printf("1");
	}
	else if (x < 0 && y>0) {
		printf("2");
	}
	else if (x < 0 && y < 0) {
		printf("3");
	}
	else if (x > 0 && y < 0) {
		printf("4");
	}

	return 0;
}