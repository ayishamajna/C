/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int prime(int)

{
    int i,n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    {
        return 1;
    }
}
int main()
{
    int n;
    printf("is %d prime?\n",n);
    if(prime(n))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}