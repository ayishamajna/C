/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,arm,i=0,power,mod;
    printf("enter the number:");
    scanf("%d",&arm);
    b=arm;
    while(b!=0){
        b=b/10;
        i++;
    }
    printf("length:%d",i);
    a=arm;
    while(a>0)
    {
        mod=a%10;
        power=power+pow(mod,i);
        a=a/10;
    }
    if(power==arm)
    {
        printf("\n%d is armstrong",power);
        }
    else{
        printf("\n%d is not armstrong",power);
    }

    
    
return 0;
}