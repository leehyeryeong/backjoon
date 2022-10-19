#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, v, cnt = 0;
	int num[100] = {0, };

	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d ", &num[i]);
	}
	scanf("%d", &v);
	for (int i = 0; i < n; i++) {
		if (num[i] == v) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}