/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void sum();
void main()
{
    printf("calculate the sum of numbers:");
    sum();
}
void sum()
{
int a,b;
printf("\nenter two numbers:");
scanf("%d %d",&a,&b);
printf("the sum is %d",a+b);
}
