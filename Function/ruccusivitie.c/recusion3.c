#include <stdio.h>

int max_element(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    } else {
        int max = max_element(arr, n - 1);
        if (arr[n - 1] > max) {
            return arr[n - 1];
        } else {
            return max;
        }
    }
}

int main() {
    int arr[] = {1, 4, 2, 7, 5, 3, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = max_element(arr, n);

    printf("The largest element in the array is: %d\n", max);

    return 0;
}
