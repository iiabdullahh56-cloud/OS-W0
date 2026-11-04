#include <stdio.h>

int main(void) {
    FILE *f = fopen("foo.txt", "r");
    int num, sum = 0;
    while (fscanf(f, "%d", &num) == 1) {
        sum += num;
    }
    fclose(f);
    printf("Sum: %d\n", sum);
    return 0;
}