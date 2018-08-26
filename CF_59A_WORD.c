#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  scanf("%s", &s);
  int i, countu = 0, countl = 0;
  for(i = 0; i < strlen(s); i++) {
    if(s[i] >= 'a' && s[i] <= 'z') {
      countl++;
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      countu++;
    }
  }
  if(countu > countl)
  {
    for(i = 0; i < strlen(s); i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
        s[i] -= 32;
      }
    }
  }
  else {
    for(i = 0; i < strlen(s); i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
        s[i] += 32;
      }
    }
  }
  printf("%s", s);
}
