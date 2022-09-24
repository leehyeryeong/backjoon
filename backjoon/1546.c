#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, score[1000];
	int max = 0; double avg = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
		if (max < score[i]) {
			max = score[i];
		}
	}
	for (int i = 0; i < n; i++) {
		avg += (double)score[i] / max * 100;
	}

	avg /= n;
	printf("%lf", avg);

	return 0;
}