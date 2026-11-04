#include <stdio.h>

void swap(void *x, void *y) {
    int temp = *(int*)x;
    *(int*)x = *(int*)y;
    *(int*)y = temp;
}

int main(void) {
    int a = 1, b = 2;
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}