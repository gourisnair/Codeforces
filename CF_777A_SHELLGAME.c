#include<stdio.h>
#include<math.h>
int main()
{
  int n, i, temp;
  scanf("%d", &n);
  int x;
  scanf("%d", &x);
  char a[3] = {'0', '0', '0'};
  a[x] = 'B';
  for(i = n; i >0; i--) {
    if(i % 2 != 0) {
      temp = a[1];
      a[1] = a[0];
      a[0] = temp;
    } else {
      temp = a[2];
      a[2] = a[1];
      a[1] = temp;
    }
  }
  if(a[0] == 'B') {
    printf("0");
  } else if (a[1] == 'B') {
    printf("1");
  } else if (a[2] == 'B') {
    printf("2");
  }
}
