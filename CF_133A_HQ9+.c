#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  int i, count = 0;
  scanf("%s", &s);
  for(i = 0; i < strlen(s); i++) {
    if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+') {
      count++;
    }
  }
  if(count > 0) {
    printf("YES");
  } else printf("NO");
}
