#include <stdio.h>

int main(void) {
    int n = 5;
    int *ptr_to_n = &n;
    *ptr_to_n = *ptr_to_n + 1;
    printf("%d\n", n);
    return 0;
}