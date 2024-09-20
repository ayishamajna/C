/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int num(int);
int main()
{
    int a,result;
    printf("enter the number:");
    scanf("%d",&a);
    result=num(a);
    if(result==1)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

}
int num(int a){
    if(a%2==0){
    return 1;
    }
else
{
    return 0;
}
}
