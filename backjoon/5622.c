#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int dial(int num) {
	switch (num) {
		case 'A':
		case 'B':
		case 'C':
			return 3;

		case 'D':
		case 'E':
		case 'F':
			return 4;

		case 'G':
		case 'H':
		case 'I':
			return 5;

		case 'J':
		case 'K':
		case 'L':
			return 6;

		case 'M':
		case 'N':
		case 'O':
			return 7;

		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			return 8;

		case 'T':
		case 'U':
		case 'V':
			return 9;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			return 10;
	}
}
int main() {
	char arr[15];
	int a = 0;
	scanf("%s", arr);

	for (int i = 'A'; i <= 'Z'; i++) {
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == i) {
				a += dial(i);
			}
		}
	}

	printf("%d", a);

	return 0;
}