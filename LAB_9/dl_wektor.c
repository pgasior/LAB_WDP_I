#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double dl_wek(double a[], int dl)
{
    float suma  =0;
    int i=0;
    for (i=0;i<dl;i++)
	suma+=a[i]*a[i];
    return sqrt(suma);
}
int main()
{
    double *a;
    int rozmiar,i;
    printf("Podaj rozmiar wektora: ");
    scanf("%d",&rozmiar);
    a = malloc(rozmiar*sizeof(double));
    for(i=0;i<rozmiar;i++)
    {
	printf("Podaj wspolrzedna nr %d: ",i+1);
	scanf("%lf",&a[i]);
    }
    printf("Dlugosc wektora wynosi %lf\n",dl_wek(a,rozmiar));
    return 0;
}
