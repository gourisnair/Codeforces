#include<stdio.h>
#include<string.h>
int main()
{
  int i, count = 0;
  char s[100];
  scanf("%s", &s);
  for(i = 1; i < strlen(s); i++) {
    if (s[i] == s[i-1]) {
      count++;
    }
    else count == 0;
  }
  if(++count >= 7) {
    printf("YES");
  } else printf("NO");
}
