#include <stdio.h>
double w(double x)
{
    //return 5+x*(7+x*(-6+x*(-3+x*(2))));
    return -36+x*(54+x*(-14+x*(-6+x*(2))));
}
int main()
{
    double x;
    printf("Podaj x: ");
    scanf("%lf",&x);
    printf("W(x) = %lf\n",w(x));
    return 0;
}
