
#include <stdio.h>

// 将 num 数组初始化成大整数表示的 1
// 作用就是做累乘变量
int num[400] = {1, 1}; 

int main() {
    // 计算 100 次 2 的 10 次方相乘的结果
    for (int i = 0; i < 100; i++) {
        // 对大整数的每一位乘以 2 的 10 次方
        for (int j = 1; j <= num[0]; j++) num[j] *= 1024;      
        // 处理进位
        for (int j = 1; j <= num[0]; j++) {
            if (num[j] < 10) continue;          
            if (j == num[0]) num[++num[0]] = 0;
            num[j + 1] += num[j] / 10;
            num[j] %= 10;
        }
    }
    // 输出大整数
    // 由于大整数是倒着存的，所以输出的时候倒着遍历
    for (int i = num[0]; i >= 1; --i) printf("%d", num[i]);
    printf("\n");
    return 0;
}