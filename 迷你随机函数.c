#include <stdio.h>
int getRegularValue(int rate, int temp);

int main() {
    int i = 2;
    int start = 5;
    int temp = start;
    int rate = 0;
    printf("%3d", start);
    while (i <= 100) {
        temp = start * 3;
        rate = temp / 100;
        start = getRegularValue(rate, temp);
        printf("%3d", start);
        if (i % 10 == 0) printf("\n");
        i++;
    }
    return 0;
}
int getRegularValue(int rate, int temp) {
    int regular = (temp - rate * 101) < 0 ? temp - (rate - 1) * 101 : temp - rate * 101;
    int value = rate > 0 ? regular : temp;
    return value;
}