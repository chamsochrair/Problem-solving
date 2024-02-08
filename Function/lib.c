#include <stdio.h>

// Declare N and D as static variables
static int N, D;

// Define the multip function as static
static void multip() {
    D = 1;
    if (N > 0) {
        for (int i = 0; i <= 10; i++) {
            D = N * i;
            printf("%d\n", D);
        }
    } else {
        printf("Please enter a positive number.\n");
    }
}