#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char a[1000001];
    scanf("%[^\n]", &a);

    int cnt = 0;
    if (strlen(a) == 1 && a[0] == ' ') {
        printf("0");
        return 0;
    }
    for (int i = 1; i < strlen(a) - 1; i++) {
        if (a[i] == ' ') {
            cnt++;
        }
    }
    printf("%d", cnt + 1);
}