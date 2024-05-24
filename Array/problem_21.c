#include <stdio.h>

int main() {
    int n, m, i, j;

    // Input size and elements for array A
    printf("Enter the size of array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d integers for array A:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Input size and elements for array B
    printf("Enter the size of array B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter %d positive integers for array B:\n", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    // Find the difference (A - B)
    int diffSize = 0;
    int diff[n]; // The difference array

    // Loop through elements of A
    for (i = 0; i < n; i++) {
        int found = 0; // Flag to check if the element is in B

        // Check if the element is in B
        for (j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                found = 1;
                break;
            }
        }

        // If the element is not in B, add it to the difference array
        if (!found) {
            diff[diffSize] = A[i];
            diffSize++;
        }
    }

    // Display the difference array
    printf("Difference (A - B):\n");
    for (i = 0; i < diffSize; i++) {
        printf("%d ", diff[i]);
    }

    return 0;
}

