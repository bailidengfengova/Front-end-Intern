#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", &str);
    int i = 0;
    for (; str[i]; i++) {
        printf("c:%c\n", str[i]);
        printf("d:%d\n", str[i]);
    }
    printf("d:%d\n", str[i]);
    printf("d:%d\n", str[i + 1]);
    return 0;
}