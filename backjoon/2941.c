#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char arr[100];
	scanf("%s", arr);
	int cnt = strlen(arr);

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == '=') {
			if (arr[i - 1] == 'c') cnt--;
			if (arr[i - 1] == 's') cnt--;
			if (arr[i - 1] == 'z') {
				cnt--;
				if (arr[i - 2] == 'd') cnt--;
			}
		}
		if (arr[i] == '-') {
			if (arr[i - 1] == 'c') cnt--;
			if (arr[i - 1] == 'd') cnt--;
		}
		if (arr[i] == 'j') {
			if (arr[i - 1] == 'l') cnt--;
			if (arr[i - 1] == 'n') cnt--;
		}
	}

	printf("%d", cnt);

	return 0;
}