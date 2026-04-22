/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.*/

#include <stdio.h>
#define SIZE 1000

int arr[SIZE];

int main() {
    int n, target;
    printf("Size of array:");
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++) {
        printf("No. of elements in array:");
        scanf("%d", &nums[i]);
        arr[i] = -1;
    }
printf("Target:");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];

        for (int j = 0; j < i; j++) {
            if (nums[j] == complement) {
                printf("%d %d\n", j, i);
                return 0;
            }
        }
    }

    return 0;
}