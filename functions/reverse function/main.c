/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void rev();
int main()
{
    rev();
}
void rev()
{
    int mode,n,b,i;
    printf("enter the number:");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        mode=n%10;
        b=b*10+mode;
        n/=10;
    }
    printf("reverse:%d",b);
    if(b==i)
    {
        printf("\n%d == %d both are equal",i,b);
    }
    else{
        printf("\n%d != %d both are not equal",i,b);
    }
}