#include <stdio.h>

void kwadrat(int rozmiar)
{
    int i,j;
    for(i=0;i<rozmiar;i++)
	printf("*");
    printf("\n");
    for(i=0;i<rozmiar-2;i++)
    {
	printf("*");
	for(j=0;j<rozmiar-2;j++)
	{
	    printf(" ");
	}
	printf("*\n");
    }
    for(i=0;i<rozmiar;i++)
	printf("*");
}

int main()
{
    int rozmiar;
    printf("Podaj rozmiar: ");
    scanf("%d",&rozmiar);
    kwadrat(rozmiar);
    return 0;
}
