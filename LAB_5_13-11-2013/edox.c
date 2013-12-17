#include <stdio.h>
#include <math.h>

double f(double x)
{
    return exp(-x)*sqrt((sin(x)*sin(x)+1)/(cos(x)*cos(x)+1));
}

int main()
{
    double x= 0;
    printf("x\t\tf(x)\n");
    printf("------------------------\n");
    for(x=0;x<=3;x+=0.25)
    {
	printf("%lf\t%lf\n",x,f(x));
    }
    return 0;

}
