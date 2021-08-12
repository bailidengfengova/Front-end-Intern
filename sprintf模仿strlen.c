#include <stdio.h>

int main() {
    char str[100] = "hello world";
    // int n = sprintf(str, "hello world");
    int n = sprintf(str, "%s", str);
    printf("%d\n", n);
    return 0;
}