#include <stdio.h>

int main()
{
    int a;
    double najwieksza, b;
    najwieksza = 0;
    scanf("%d",&a);
    if (a>0)
    {
       int i=0;
       scanf("%lf",&b);
       najwieksza = b;
       for(i=1;i<a;i++)
       { 
	  scanf("%lf",&b);
	  if (b>najwieksza)
	      najwieksza = b;
       }	   
       printf("Najwieksza liczba: %g\n", najwieksza);
    }
    return 0;
}
