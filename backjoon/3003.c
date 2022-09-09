#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int chess[6] = { 1, 1, 2, 2, 2, 8 };
	int white = 0; //왜 배열로 쓰지 않아도 되는지 생각해보기

	for (int i = 0; i < 6; i++) {
		scanf("%d", &white);
		printf("%d ", (chess[i] - white));
	}

	return 0;
}