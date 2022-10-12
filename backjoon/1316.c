#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char arr[100];
	int n;
	scanf("%d", &n);
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		scanf("%s", arr);

		int alphabet[26];
		for (int j = 0; j < 26; j++) {
			alphabet[j] = 0;
		}

		for (int k = 0; k < strlen(arr); k++) {
			char letter = arr[k];
			if (alphabet[letter - 'a'] == 0) {
				alphabet[letter - 'a'] = 1;
			}
			else {
				if (arr[k - 1] != arr[k])
					break;
			}
			if (k == strlen(arr) - 1) {
				cnt++;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}