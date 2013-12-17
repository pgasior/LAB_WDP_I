#include <stdio.h>

int main()
{
    int a[] = {7,0,1,3,-5,0,2,8,0,0};
    int najw = 0;
    int i = 0;
    int dl_podciag = 0, najd_podciag = 0;
    while(!(a[i]==0 && a[i+1]==0))
    {
	if(a[najw]<a[i])
	    najw=i;
	if(a[i])
	    dl_podciag++;
	else if(a[i]==0)
	{
	    if (najd_podciag < dl_podciag)
		najd_podciag = dl_podciag;
	    dl_podciag = 0;
	}
	i++;
    }
    printf("Pozycja liczby o najwiekszej wartosci: %d\nDlugosc najdluzszego podciagu: %d\n",najw,najd_podciag);
    return 0;
}
