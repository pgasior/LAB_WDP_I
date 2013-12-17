#include <stdio.h>

int main()
{
    int a = 0;
    unsigned int maska  = 1<<31;
    printf("Podaj a: ");
    scanf("%d",&a);
    int sep=7;
    while(maska)
    {
	if(maska&a)
	    printf("1");
	else
	    printf("0");
	if (sep)
	    sep--;
	else
	{
	    sep = 7;
	    printf(" ");
	}


	maska=maska>>1;
    }
    return 0;
}
