#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void losuj(int tab[], int rozmiar)
{
    int i;
    srand(time(0));
    for (i=0;i<rozmiar;i++)
	tab[i]=rand();

}
void zapisz(int tab[], int rozmiar)
{
    int i;
    FILE* f;
    f=fopen("dane.txt","w");
    for (i=0;i<rozmiar;i++)
	fprintf(f,"%d\n",tab[i]);

    fclose(f);

}
void wczytaj(int tab[], int rozmiar)
{
    FILE* f;
    int i;
    f=fopen("dane.txt","r");
    for (i=0;i<10;i++)
	fscanf(f,"%d",&tab[i]);
    fclose(f);

}
void wypisz(int tab[], int rozmiar)
{
    int i;
    for(i=0;i<10;i++)
	printf("%d\n",tab[i]);

}
void sortuj(int tab[], int rozmiar)
{
    int i,j,tmp;

    printf("\n");
    for(i=0;i<rozmiar;i++)
    {
	for(j=0;j<rozmiar-1;j++)
	{
	    if(tab[j]>tab[j+1])
	    {
		tmp=tab[j];
		tab[j]=tab[j+1];
		tab[j+1]=tmp;
	    }
	}

    }

}
int main()
{
    int tab[10];
    losuj(tab,10);
    zapisz(tab,10);
    wczytaj(tab,10);
    wypisz (tab,10);
    sortuj(tab,10);
    printf("\n");
    wypisz(tab,10);

    return 0;
}
