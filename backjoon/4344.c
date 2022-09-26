#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int c, n, n_score[1000], sum, cnt;
	double avg;
	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		sum = 0, avg = 0;

		for (int j = 0; j < n; j++) {
			scanf("%d", &n_score[j]);
			sum += n_score[j];
		}

		avg = (double)sum / n;

		cnt = 0;
		for (int k = 0; k < n; k++) {
			if (avg < n_score[k]) {
				cnt++;
			}
		}
		printf("%.3lf%%\n", ((double)cnt * 100) / n);
	}

	return 0;
}