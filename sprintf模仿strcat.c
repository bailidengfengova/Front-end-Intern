#include <stdio.h>

int main() {
    char str[100] = "string111";
    char desc[100] = "string222";
    sprintf(desc, "%s%s", desc, str);
    printf("%s\n", desc);
    return 0;
}