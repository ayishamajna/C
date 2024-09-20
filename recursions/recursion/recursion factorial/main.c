/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fact(int k);
int main()
{
    int result,num;
    printf("enter the number:");
    scanf("%d",&num);
    result=fact(num);
    printf("%d",result);
    return 0;
}

    int fact(int k){
        if (k==1)
        {
            return 1;
        }
        else
        {
            return k*fact(k-1);
        }
    }