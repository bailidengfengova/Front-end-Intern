#include <stdio.h>
#include <stdlib.h>
#define MAX_N 10

int prime[MAX_N + 5] = {0};
void init_prime() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) continue;
        // 素数中最小的素因子是其本身
        prime[i] = i;  
        for (int j = 2 * i; j <= MAX_N; j += i) {
            if (prime[j]) continue;
            // 如果 j 没有被标记过，就标记成 i 
            // 此方法是为了找每一个数标记的最小素数
            prime[j] = i;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        // 如果没有被标记，那么它就是素数，那最小素数就是其本身
        if (prime[i] == 0) prime[i] = i;
    }
    return ;
}

int main() {
    init_prime();
    for (int i = 2; i <= MAX_N; i++) {
        printf("%d的最小素数是 %d\n", i, prime[i]);
    }
    return 0;
}
