#include <stdio.h>

int d(int n) {
	int sum = n;

	while (n > 0) {
		sum += n % 10;
		n = n / 10;
	}

	return sum;
}
int main() {
	int arr[10001] = { 0 }; int res = 0;

	for (int i = 0; i < 10001; i++) {
		res = d(i);
		if (res < 10001) {
			arr[res] = 1;
		}
	}
	for (int j = 0; j < 10001; j++) {
		if (arr[j] != 1) {
			printf("%d\n", j);
		}
	}

	return 0;
}