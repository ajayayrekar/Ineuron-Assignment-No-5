#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("The first %d odd numbers in reverse order are: \n", n);
    for (i = 2 * n - 1; i >= 1; i -= 2) {
        printf("%d\n", i);
    }
    return 0;
}
