#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char s[1000001];
int arr[26];

int main() {
	char ans;
	int max = 0;
	scanf("%s", s);
	int size = strlen(s);

	for (int i = 0; i < size; i++) {
		if (s[i] >= 'a') {
			arr[s[i] - 'a']++;
		}
		else {
			arr[s[i] - 'A']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] == max) {
			ans = '?';
		}
		else if (arr[i] > max) {
			max = arr[i];
			ans = 'A' + i;
		}
	}

	printf("%c", ans);

	return 0;
}