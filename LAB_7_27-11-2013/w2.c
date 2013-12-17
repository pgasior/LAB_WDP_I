#include <stdio.h>
double w(double x,double a[],int rozmiar)
{
    //return 5+x*(7+x*(-6+x*(-3+x*(2*x))));
    double wynik = a[0];
    int i = 0;
    for(i = 1;i<rozmiar;i++)
    {
	wynik=wynik*x+a[i];
    }
    return wynik;
}
int main()
{
    double x = 0;
    double a[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    printf("Podaj x: ");
    scanf("%lf",&x);
    printf("W(x) = %lf\n",w(x,a,sizeof(a)/sizeof(double)));
    return 0;
}
