#include <stdio.h>
double f(int n)
{
    double wynik=0;
    int i;
    for(i=1;i<=n;i++)
    {
	wynik+=1/(double)i;
    }
    return wynik;
}
int main()
{
    int n;
    printf("podaj n: ");
    scanf("%d",&n);
    printf("suma: %lf\n",f(n));
    return 0;
}
