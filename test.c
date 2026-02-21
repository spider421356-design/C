#include <stdio.h>

int main(void) {
    long long sum = 0;
    long long x;
    printf("Enter integers (Ctrl+Z then Enter to finish on Windows):\n");
    while (scanf("%lld", &x) == 1) {
        sum += x;
    }
    printf("Sum = %lld\n", sum);
    return 0;
}