#include <stdio.h>

int arrays_equal(int *a, int *b, int length) {
    if (a == NULL || b == NULL) return 0;
    for (int i = 0; i < length; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main(void) {
    int x[3] = {1, 2, 3};
    int y[3] = {1, 2, 3};
    printf("%d\n", arrays_equal(x, y, 3));
    return 0;
}