#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, arr[1000000], min, max;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	min = max = arr[0];

	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		else if (min > arr[i]) {
			min = arr[i];
		}
	}

	printf("%d %d", min, max);

	return 0;
}