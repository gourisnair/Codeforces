#include<stdio.h>
#include<string.h>
int main()
{
  long long int n, sum = 0, sumo = 0, sume = 0, i;
  scanf("%lld", &n);
  long long int a[n];
  for(i = 0; i < n; i++) {
    scanf("%lld", &a[i]);
    sum += a[i];
    if(sum % 2 != 0) {
      sumo = sum;
    } else sume = sum;
  }
  printf("%lld", sume);
}
