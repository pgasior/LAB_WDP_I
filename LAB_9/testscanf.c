#include <stdio.h>
int main()
{
    int tab[3];
    int i = 0,tmp;
//    for(i=0;i<3;i++);
  //  {
//	scanf("%d",&tab[i]);
  //  }

    while (scanf("%d",&tmp) ==1)
    {
	tab[i]=tmp;
	i++;

    }
    for(i=0;i<3;i++);
    {
	printf("%d ",tab[i]);
    }
    return 0;


}
