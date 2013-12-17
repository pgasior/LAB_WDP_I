/*
 * =====================================================================================
 *
 *       Filename:  oct.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06.11.2013 18:52:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("a = %d\tb = %d\n",a,b);
    a^=b;
    b^=a;
    a^=b;
    printf("a = %d\tb = %d\n",a,b);
    return 0;
}
