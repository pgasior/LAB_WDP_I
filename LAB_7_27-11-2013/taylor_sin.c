#include<stdio.h>
#include<math.h>

long silnia(long n)
{
    long wynik = 1;
    int i = 0;
    for (i=2;i<=n;i++)
	wynik*=i;
    return wynik;
}

double taylor(double x)
{
    int i;
    double sinus = x;
    double a = x;
    int znak =  -1;
    for(i=1;i<=4;i++)
    {
	a=a*x*x;
	printf("i=%d\ta^%d=%lf\n",i,2*i+1,a);
	sinus+=znak*a/silnia(2*i+1);
	znak*=-1;
    }
    return sinus;
   /*  int i;
    double sinus =x;
    for(i=1;i<=4;i++)
    {
	if(i%2)
	{
	    //sinus+=pow(x,2*i+1)/silnia(2*i+1);
	    x=x*x*x;
	    sinus+=x/silnia(2*i+1);
	}
	else
	{
	    //sinus-=pow(x,2*i+1)/silnia(2*i+1);
	    x=x*x*x;
	    sinus-=x/silnia(2*i+1);
	}
    }*/
    return sinus;
}
int main()
{
    double x;
    printf("Podaj x: ");
    scanf("%lf",&x);
    printf("sin(x) z szeregu Taylora = %lf\nsin(x) z math = %lf\n",taylor(x),sin(x));
    return 0;
}
