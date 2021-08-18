#include <stdio.h>

int main() {
    // int a = 0x61626364;
    // int *p = &a;
    // char *q = (char *)&a;
    // printf("%x %x\n", *p, *q);
    
    
    // int a, *p = &a;
    // char *q = (char *)&a;
    // printf("%p %p\n", p, q);
    // printf("%p %p", p + 1, q + 1);

    
    int arr[100] = {1, 2, 3, 4};
    int *p = arr;
    printf("%d %d\n", arr[1], p[1]);
    printf("%d %d\n", arr[1], *(p + 1));
    return 0;
}