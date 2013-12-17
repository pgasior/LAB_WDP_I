#include <stdio.h>

int main()
{
    int n = 0;
    unsigned long long int silnia  =1;
    int i;
    printf("Podaj n: ");
    scanf("%d",&n);
	
    for(i=2;i<=n;i++)
    {
	silnia*=i;
    }
    printf("n! = %llu\n",silnia);
    return 0;

}
