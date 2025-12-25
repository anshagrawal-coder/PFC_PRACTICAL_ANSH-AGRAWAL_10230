#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            continue;  
        }
        sum = sum + i;
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}
