#include<stdio.h>
#include<string.h>
int main()
{
  int n, count = 0, i;
  scanf("%d", &n);
  int a[n];
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for(i = 0; i < n - 1; i++) {
    if (a[i + 1] != a[i]) {
      count++;
    }
  }
  
  printf("%d", count + 1);
}
