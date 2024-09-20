/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=0,b=1,c,limit,i;
    printf("enter the limit:");
    scanf("%d",&limit);
    printf("\t%d \t%d",a,b);
    for(i=0;i<=limit;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
    
    
    return 0;
}