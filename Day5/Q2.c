/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.*/

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    int nums1[m + n], nums2[n];

    printf("Enter %d elements of nums1: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    for (int i = m; i < m + n; i++) {
        nums1[i] = 0;
    }

    printf("Enter %d elements of nums2: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }

    printf("Merged array: ");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", nums1[x]);
    }

    return 0;
}