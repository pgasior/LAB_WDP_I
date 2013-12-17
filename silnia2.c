#include <stdio.h>

long silnia(long n)
{
    if(n==0)
    {
	return 1;
    }
    else
    {
	return n*silnia(n-1);
    }
}
long silnia_it(long n)
{
   long wyn = 1;
   int i; 
   for(i=2; i<=n;i++)
   {
       wyn*=i
   } 
   return wyn;
}

int main()
{
    long n;
    printf("podaj n ");
    scanf("%ld",&n);
    printf("%ld! = %ld rekurencyjnie\n",n,silnia(n));
    printf("%ld! = %ld iteracyjnie",n,silnia_it(n));
    return 0;

}
