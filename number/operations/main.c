/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    c=a*b;
    d=a-b;
    e=a+b;
    f=a%b;
    g=a/b;
    printf("%d+%d:%d\n",a,b,c);
    printf("%d+%d:%d\n",a,b,d);
    printf("%d+%d:%d\n",a,b,e);
    printf("%d+%d:%d\n",a,b,g);
    printf("Modulus:%d\n",a,b,f);
    return 0;
}

