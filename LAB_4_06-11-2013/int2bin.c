#include <stdio.h>


int main()
{
    int a = 1<<31;
    unsigned int mask=1<<31;
    int sep=7;
    //printf("podaj a ");
    //scanf("%d",&a);
    while(mask)
    {
	//printf("Maska: %i\n",mask);
	if(a&mask) putchar('1');
	else
	    putchar('0');
	if(sep)
	    --sep;
	else
	{
	    sep=7;
	    putchar(' ');
	}
	mask>>=1;
    }
    putchar('\n');



    return 0;
}
