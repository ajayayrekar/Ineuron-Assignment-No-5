#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("The first %d odd numbers are: \n", n);
    for (i = 1; i <= n * 2; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}
