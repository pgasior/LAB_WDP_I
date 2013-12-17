#include <stdio.h>
#include <stdlib.h>

double** rozwin(int rozmiar, int nr, double** a) //funkcja rozwijająca macierz względem 1 kolimny i i-tego wiersza
{
    double** tab2 = malloc((rozmiar-1)*sizeof(double*)); //allokuje pamięć na tablice
    int i,j;
    for (i=0;i<rozmiar-1;i++)
	tab2[i] = malloc((rozmiar-1)*sizeof(double));
    for(i=1;i<rozmiar;i++) //przenosi wyrazy z tablicy a do tab2 z pominięciem 1 wiersza i danej kolumny tablicy a
    {
	for(j=0;j<rozmiar;j++)
	{
	    if(j==nr)
		continue;
	    else if(j<nr)
	    {
		tab2[i-1][j] = a[i][j];
	    }
	    else
	    {
		tab2[i-1][j-1] = a[i][j];
	    }
	}
    }
    return tab2;
}

double det(int rozmiar,double** a) //funkcja licząca wyznacznik rekurencyjnie
{
    if (rozmiar == 1)
	return a[0][0];
    else
    {
	double** rozwinieta; //wskaźnik do tablicy z macierzą rozwiniętą względem 1 wiersza i i-tej kolumny
	int i,fi;
	int znak = 1;
	double wyznacznik = 0;
	for (i=0;i<rozmiar;i++)
	{
	    rozwinieta = rozwin(rozmiar,i,a); //rozwiniecie macierzy względem pierwszego wiersza i i-tej kolumny
	    wyznacznik+=a[0][i]*znak*det(rozmiar-1,rozwinieta);
	    znak =-znak;
	    for(fi=0;fi<rozmiar-1;fi++) //zwalnianie pamięci tablicy przechowujacej rozwiniętą macierz
		free(rozwinieta[fi]);
	    free(rozwinieta);
	}
	return wyznacznik;
    }
}
int main()
{
    int i,j,rozmiar;
    printf("Podaj rozmiar macierzy: ");
    scanf("%d",&rozmiar);
    double** macierz = malloc(rozmiar*(sizeof(double*))); //allokuje pamięć na tablice przechowującą macierz(kolumny)
    for(i=0;i<rozmiar;i++)                                ///allokuje pamięć na tablice przechowującą macierz(wiersze)
	macierz[i] = malloc(rozmiar*sizeof(double));
    for(i=0;i<rozmiar;i++) //wczytuję dane
    {
	for(j=0;j<rozmiar;j++)
	{
	    printf("Podaj element [%d,%d]: ",i+1,j+1);
	    scanf("%lf",&macierz[i][j]);
	}

    }
    printf("Wyznacznik wynosi %0.2lf\n",det(rozmiar,macierz));
    for(i=0;i<rozmiar;i++) //zwalniam pamięć
    {
	free(macierz[i]);
    }
    free(macierz);
    return 0;
}
