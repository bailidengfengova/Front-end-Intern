#include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int digit = 1;
//     while(n / 10 != 0) {
//         digit++;
//         n /= 10;
//     }
//     printf("%d\n", digit);
//     return 0;
// }

// 使用printf函数，有多余的输出
// int main() {
//     int n;
//     scanf("%d", &n);
//     int digit = 1;
//     printf("has %d digit\n", printf("%d", n));
// }

// 使用sprintf函数，没有多余输出
int main() {
    int n;
    scanf("%d", &n);
    int digit = 1;
    char output[50];
    printf("has %d digit\n", sprintf(output, "%d", n));
}