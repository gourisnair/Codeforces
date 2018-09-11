#include<stdio.h>
#include<string.h>
int main()
{
  int i, j, cntc = 0, cntb = 0, n, m;
  scanf("%d%d", &n, &m);
  char p[n][m];
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= m; j++) {
      scanf("%c", &p[i][j]);
      if(p[i][j] == 'C' || p[i][j] == 'M' || p[i][j] == 'Y' ) {
        cntc++;
      } else if (p[i][j] == 'W' || p[i][j] == 'G' || p[i][j] == 'B') {
        cntb++;
      }
    }
  }
  printf("%d", cntc);
  printf("%d", cntb);
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= m; j++) {
      printf("%c ", p[i][j]);
    }
    printf("\n");
  }
  if(cntb > 0 && cntc == 0) {
    printf("#Black&White");
  } else if(cntc > 0) {
    printf("#Color");
  }
}
