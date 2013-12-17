#include <stdio.h>

int main()
{
    int wys = 4;
    int szer  = 8;
    int i,j,k;
    for(i=0;i<wys;i++)
    {
	for(k=0;k<wys-i-1;k++)
	{
	    printf(" ");
	}
	for(j=0;j<szer;j++)
	{
	    printf("*");
	}
	printf("\n");
    }
    return 0;
}
