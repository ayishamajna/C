/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    printf("enter a year:");
    scanf("%d",&year);
    if(year %400==0)
    {
        printf("%d is a leap year",year);
    }
    else if(year%100==0)
    {
        printf("%d is not a leap year",year);
    }
    else if("year%4==0")
    {
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }

    return 0;
}