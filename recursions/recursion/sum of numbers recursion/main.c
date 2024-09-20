/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int a);
int main()
{
    
    int n,result;
    printf("enter the number:");
    scanf("%d",&n);
    result=sum(n);
    printf("%d",result);
    return 0;
}
int sum(int a)
{
    if(a>0)
    {
        return a+sum(a-1);
    }
    else
    {
        return 0;
    }
}
