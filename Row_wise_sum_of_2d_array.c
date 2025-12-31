#include <stdio.h>

int main() {
    int arr[10][10], n, i, j;
    int sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += arr[i][i];  
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}

// sample output and input
// Enter size of square matrix: 3
// Enter elements of the matrix:
// 1 2 3
// 4 5 6
// 7 8 9

// Sum of diagonal elements = 15
