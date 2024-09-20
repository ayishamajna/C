/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void sum();
void main()
{
    sum();
}
void sum()
{
    int a,b,c;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d is sum",c);
}