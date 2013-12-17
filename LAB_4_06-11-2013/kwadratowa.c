#include <stdio.h>
#include <math.h>
int main()
{
  double a,b,c,delta;
  printf("Podaj a: ");
  scanf("%lf", &a);
  printf("Podaj b: ");
  scanf("%lf", &b);
  printf("Podaj c: ");
  scanf("%lf", &c);

  delta = b*b-4*a*c;
  if (delta < 0)
  {
    printf("Brak pierwiastkow\n");
    return 0;
  }
  if(delta == 0)
  {
    printf("x = %lf\n", (-b)/2/a);
    return 0;
  }
  else
  {
    printf("x1 = %lf\nx2 = %lf\n", (-b-sqrt(delta))/2/a, (-b+sqrt(delta))/2/a );
    return 0;
  }
}
