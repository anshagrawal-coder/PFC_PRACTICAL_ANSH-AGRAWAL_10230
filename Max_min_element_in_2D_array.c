#include <stdio.h>

int main() {
    int arr[10][10], rows, cols;
    int i, j;
    int max, min;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter array elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = min = arr[0][0]; 

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

// sample output and input
// Enter number of rows: 2
// Enter number of columns: 3
// Enter array elements:
// 5 12 7
// 9 3 15

// Maximum element = 15
// Minimum element = 3

