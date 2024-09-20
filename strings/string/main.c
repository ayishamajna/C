/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[5]={'m','a','j','n','a'};
    char b[]="majna";
    for(i=0;i<5;i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}