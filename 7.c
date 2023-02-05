#include <stdio.h>

int main() {
  int n, i;

  // Input the value of n
  printf("Enter the value of n: ");
  scanf("%d", &n);

  // Print the first n even natural numbers in reverse order
  printf("The first %d even natural numbers in reverse order: \n", n);
  for (i = 2 * n; i >= 2; i -= 2) {
    printf("%d\n", i);
  }

  return 0;
}
