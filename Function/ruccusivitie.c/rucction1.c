#include <stdio.h>

int sum_natural_numbers(int N) {
    if (N == 1) {
        return 1;
    } else {
        return N + sum_natural_numbers(N - 1);
    }
}

int main() {
    int N, sum;
    printf("Enter the number N: ");
    scanf("%d", &N);
    sum = sum_natural_numbers(N);
    printf("%d\n", sum);
    return 0;
}