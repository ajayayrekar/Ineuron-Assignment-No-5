#include <stdio.h>

int main() {
  int n, i;

  // Input the value of n
  printf("Enter the value of n: ");
  scanf("%d", &n);

  // Print the cubes of the first n natural numbers
  printf("The cubes of the first %d natural numbers are: \n", n);
  for (i = 1; i <= n; i++) {
    printf("%d\n", i * i * i);
  }

  return 0;
}
