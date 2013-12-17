#include <stdio.h>

int main()
{
    int i = 0;
    double a = 0,suma = 0,max = 0,min = 0;
    if (scanf("%lf", &a))
    {
	min = a;
	max = a;
	suma = a;
	i=1;
    }
    while( scanf("%lf", &a))
    {
	if (a>max)
	    max=a;
	if(a<min)
	    min=a;
	suma+=a;
	i++;

    }
    printf("Podano %d liczb. Najwieksza %g, najmniejsza %g, srednia %g, suma %g\n", i, max, min, suma/i, suma);
    return 0;
}
