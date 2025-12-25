#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    int i = a;
    while (i <= b) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
