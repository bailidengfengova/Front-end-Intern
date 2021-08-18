#include <stdio.h>

int prime[1005] = {0};
void init_prime() {
    // 素数筛的标记过程
    for (int i = 2; i * i <= 1000; i++) {
        if (prime[i]) continue;
        // 用 j 枚举所有素数 i 的倍数
        for (int j = 2 * i; j <= 1000; j += i) {
            prime[j] = 1; // 将 j 标记为合数
        }
    }
    return ;
}

int main() {
    init_prime();
    int temp = 0;
    for (int i = 2; i <= 1000; i++) {
        if (prime[i] == 1) 
            continue;
        temp++;
        printf("%d\t", i);
        if (temp % 10 == 0)
            printf("\n");
    }
    return 0;
}