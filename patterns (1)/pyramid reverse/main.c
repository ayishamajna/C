/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n=5,k;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
        printf("* ");
        }
        printf("\n");
    }
     int a,b,c=5,d;
    for(a=0;a<=c;a++)
    {
        for(b=0;b<=c-a;b++)
        {
            printf(" ");
        }
        for(d=0;d<=a;d++)
        {
        printf("* ");
        }
        printf("\n");
    }


    

    return 0;
}
