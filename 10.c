#include <stdio.h>

int main() {
  int n, i;

  // Input the value of n
  printf("Enter the value of n: ");
  scanf("%d", &n);

  // Print the table of n
  printf("Table of %d:\n", n);
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", n, i, n * i);
  }

  return 0;
}
