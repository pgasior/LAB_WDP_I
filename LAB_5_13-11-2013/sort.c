#include <stdio.h>
#define WYMIAR 5
int main()
{
    int tab[WYMIAR];
    int i=0,j = 0;
    int a = 0, b = 0;
    for (i=0;i<WYMIAR;i++)
    {
	scanf("%d",&a);
	tab[i]=a;
    }
    printf("\n\n");
    for(i=0;i<WYMIAR;i++)
    {
	for(j=0;j<WYMIAR-1;j++)
	{
	    if (tab[j]>tab[j+1])
	    {
		b=tab[j];
	    	tab[j]=tab[j+1];
		tab[j+1]=b;
	    }
	}
    }
    for(i=0;i<WYMIAR;i++)
    {
	printf("%d\n",tab[i]);
    }
    return 0;
}
