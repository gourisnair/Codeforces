#include<stdio.h>
#include<string.h>
int main()
{
  int n, sum = 0, i, j, count = 0;
  scanf("%d", &n);
  int v[n];
  int c[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &v[i]);
    sum += v[i];
  }

  for(i = 0; i < n; i++) {
    scanf("%d", &c[i]);
  }
  for(i = 0; i < n - 1; i++) {
    for(j = i + 1; j < n - i; j++) {
      if(sum <= (c[i] + c[j])) {
        count ++;
      }
    }
  }
  if(count > 0) {
    printf("YES");
  } else printf("NO");
}
