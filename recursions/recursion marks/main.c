/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int mark(int a);
int main()
{
    int marks,result;
    printf("enter marks:");
    scanf("%d",&marks);
    result=mark(marks);
    printf("%d",result);
}
int mark(int marks);
if(marks==A+)
    {
        printf("%d won 9 points",marks);
    }
    else if(marks == A)
    {
        printf("%d won 8 points",marks);
    }
    else if(marks == B+)
    {
        printf("%d won 7 points",marks);
    }
    else if(marks == B)
    {
        printf("%d won 6 points",marks);
    }
    else if(marks == C+)
    {
        printf("%d won 5 points",marks);
    }
    else if(marks == C)
    {
        printf("%d won 4 points",marks);
    }
    else{
        printf("%d FAILED",marks);
    }
    return 0;
}

