#include <stdio.h>
#define sqr(x) x*x

int main() {
    int n;
    //scanf("%d", n);
    n = 100;
    int sum3 = sqr(n) * sqr(n - 1) / 4;
    int sum4 = n * (n + 1) * (2 * n - 1) * (3 * sqr(n) - 1) / 3;
    int sum2k_1_2 = n * (4 * sqr(n) - 1) / 3;
    int sum2k_1_3 = sqr(n) * (2 * sqr(n) - 1);
    printf("%d %d %d %d", sum3, sum4, sum2k_1_2, sum2k_1_3);
    return 0;
}
