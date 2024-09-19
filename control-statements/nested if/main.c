/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int number;
printf("enter an integer number: ");
scanf("%d", &number);
if (number > 0)
{
printf("The entered number is positive.\n");
if (number % 2 == 0)
{
printf("The entered number is even.\n");
}
else
{
printf("The entered number is odd.\n");
}
}
else if (number < 0)
{
printf("The entered number is negative.\n");
}
else
{
printf("The entered number is zero.\n");
}

    return 0;
}
