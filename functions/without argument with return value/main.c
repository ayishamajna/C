/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void sum(int,int,int);
void main()
{
    int a,b,c;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    sum(a,b,c);
}
void sum(int a,int b,int c)
{
    c=a+b;
    printf("%d is sum",c);
}
