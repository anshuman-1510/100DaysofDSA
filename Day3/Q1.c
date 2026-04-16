//Implement linear search to find key k in an array. Count and display the number of comparisons performed.

#include <stdio.h>

int main() {
    int n, i, k, count = 0;
    int arr[20];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 20) {
        printf("Invalid number of elements!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        count++;              
        if (arr[i] == k) {
            printf("Number found at position %d\n", i + 1);
            break;
        }
    }

    if (i == n) {
        printf("Number not found\n");
    }

    printf("Number of comparisons = %d\n", count);

    return 0;
}

