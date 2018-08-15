#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  char a[100];
  int i, count = 0;
  scanf("%s", &s);
  if(s[0] >= 'a' && s[0] <= 'z') {
   a[0] = s[0] -32;
 } else a[0] = s[0];


  for(i = 1; i < strlen(s); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      count++;
      a[i] = s[i];
    } else {
      a[i] = s[i] + 32;
    }
  }
  
  if(count > 0) {
    printf("%s", s);
  }else printf("%s", a);
}
