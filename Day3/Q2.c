/*You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.*/


#include <stdio.h>

int main() {
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements: ", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = n * (n + 1) / 2;

    int arrSum = 0;
    for (int i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    int missing = totalSum - arrSum;

    printf("Missing number = %d\n", missing);

    return 0;
}