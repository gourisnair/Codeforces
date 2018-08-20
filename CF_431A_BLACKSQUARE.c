#include<stdio.h>
#include<string.h>
int main()
{
  int i, sum = 0;
  int c[4];
  char s[100000];
  for(i = 0; i < 4; i++)
  {
    scanf("%d", &c[i]);
  }
  scanf("%s", &s);
  for(i = 0; i < strlen(s); i++)
  {
    if(s[i] == '1')
    {
      sum += c[0];
    }
    else if(s[i] == '2')
    {
      sum += c[1];
    }
    else if(s[i] == '3')
    {
      sum += c[2];
    }
    else if(s[i] == '4')
    {
      sum += c[3];
    }
  }
  printf("%d", sum);
}
