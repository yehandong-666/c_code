#include <stdio.h>
int main(void)

{
  int i, j, k, r, m,n;

  printf("Enter n:\n");

  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= 2; j++)
    {

      for (r = 1; r < i; r++)
        printf(" ");
      printf("w");

      for (k = 1; k <= 2 * n - 2 * i; k++)
        printf(" ");
      printf("w");

      for (m = 1; m < i; m++)
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}
