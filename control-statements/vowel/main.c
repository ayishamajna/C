/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char c;
    printf("enter an alphabet:");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("its vowel");
    }
    else{
        printf("its not vowel");
    }

    return 0;
}
