/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100]="this is javatpoint with c and java gfdf";
    char*sub;
    sub=strstr(str,"java");
    printf("\nsubstring is %s:",sub);
    return 0;
}