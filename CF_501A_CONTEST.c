#include<stdio.h>
int main()
{
  int a, b, c, d, x1, x2, y1, y2, p1, p2;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  if(a % 250 == 0 && b % 250 == 0) {
    x1 = (3*a)/10;
    x2 = (3*b)/10;
    y1 = (a - (a/250)*c);
    y2 = (b - (b/250)*d);
  }
  if (x1 > y1) {
    p1 = x1;
  } else p1 = y1;
  if (x2 > y2) {
    p2 = x2;
  } else p2 = y2;
  if (p1 > p2) {
    printf("Misha");
  } else if (p2 > p1) {
    printf ("Vasya");
  } else printf("Tie");
}
