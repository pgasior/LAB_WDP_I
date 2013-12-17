#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d=a^b^c;
    printf("a = %d\nb =  %d\nc=  %d\nd = %d\n", a,b,c,d);
    b = 0;
    printf("a = %d\nb =  %d\nc=  %d\nd = %d\n", a,b,c,d);
    b = a^c^d;
    printf("a = %d\nb =  %d\nc=  %d\nd = %d\n", a,b,c,d);

    return 0;
}
