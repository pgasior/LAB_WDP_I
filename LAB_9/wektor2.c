#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double suma = 0,tmp;
    int rozmiar,i;
    printf("Podaj rozmiar wektora: ");
    scanf("%d",&rozmiar);
    //a = malloc(rozmiar*sizeof(double));
    for(i=0;i<rozmiar;i++)
    {
	printf("Podaj wspolrzedna nr %d: ",i+1);
	scanf("%lf",&tmp);
	suma+=tmp*tmp;
    }
    suma=sqrt(suma);
    printf("Dlugosc wektora wynosi %lf\n",suma);
    return 0;
}
