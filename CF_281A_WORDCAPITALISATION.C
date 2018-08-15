#include<stdio.h>
#include<string.h>
int main()
{
  char s[1000];
  int i;
  scanf("%s",&s);
  if(s[0] >= 'a' && s[0] <= 'z') {
    s[0] -= 32;
  }
  printf("%s",s);
}
