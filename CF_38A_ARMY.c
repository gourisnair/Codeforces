#include<stdio.h>
int main()
{
  int n, i, a, b, res = 0, f;

  do {
    scanf("%d", &n);
  }
  while (n < 2 || n > 100);
  int d[n - 1];
  for(i = 0; i < n - 1; i++) {
    scanf("%d", &d[i]);
  }
    do {
      scanf("%d%d", &a, &b);
    }
    while(a > b || a < 1 || a > n || b < 1 || b > n);
    f = b - a;

    if(f == 1) {
      res = d[a - 1];
    } else {
      for(i = a - 1; i < b - 1; i++) {
        res += d[i];
      }
    }

    printf("%d", res);

}
