#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, rest[10];
	int res = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		rest[i] = num % 42;
	}
	for (int i = 0; i < 10; i++) {
		int cnt = 0;
		for (int j = 0; j < i; j++) {
			if (rest[i] == rest[j]) {
				cnt++;
			}
		}
		if (cnt == 0) {
			res++;
		}
	}

	printf("%d", res);

	return 0;
}