#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int chkNum[30] = { 0, };
	for (int i = 0; i < 28; i++) {
		int n;
		scanf("%d\n", &n);
		chkNum[n - 1] = 1;
	}
	for (int i = 0; i < 30; i++) {
		if (chkNum[i] == 0) {
			printf("%d\n", i + 1);
		}
	}

	return 0;
}