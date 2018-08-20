#include<stdio.h>
int main()
{
  int i, total = 0;
  float a, b;
  float x[5] = {500, 1000, 1500, 2000,2500};
  float m[5];
  float w[5];
  float t[5];
  int hs, hu;
  for(i = 0; i < 5; i++)
  {
    scanf("%f", &m[i]);
  }
  for(i = 0; i < 5; i++)
  {
    scanf("%f", &w[i]);
  }
  scanf("%d%d", &hs, &hu);

  for(i = 0; i < 5; i++)
  {
    a = 0.3*x[i];
    b = (1-(m[i]/250))*x[i] - 50*w[i];
    if(a > b)
    {
      t[i] = a;
    }
    else
    {
      t[i] = b;
    }
  }
  for(i = 0; i < 5; i++)
  {
    total += t[i];
  }
  printf("%d", total + (hs*100) + (hu*-50));
}
