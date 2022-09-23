#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num[9], i;
	int max = 0; int th = 0;

	for (i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
		if (max < num[i]) {
			max = num[i];
			th = i+1;
		}
	}

	printf("%d\n", max);
	printf("%d\n", th);

	return 0;
}