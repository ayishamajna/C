/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int perfect(int a);
int main()
{
int num;
printf("enter a number: ");
scanf("%d", &num);
if (num
> 0)
{
printf("The entered number is positive.\n");
if (num / 2 == 0)
{
printf("The entered number is perfect.\n");
}

}
else if (num < 0)
{
printf("The entered number is negative.\n");
}
else
{
printf("The entered number is imperfect.\n");
}

    return 0;
}

