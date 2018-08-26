#include<stdio.h>
int main()
{
  int n, x, count = 0, i, j;
  scanf("%d%d", &n, &x);
  int a[n][n];

  for(i = 1; i <= n; i++)
  {
    for(j = 1; j <= n; j++)
    {
      a[i][j] = i * j;
      if(a[i][j] == x) {
        count++;
      }
    }
  }

  printf("%d", count);
}
