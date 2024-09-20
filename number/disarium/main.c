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
    int a,b,des,i,pos;
    printf("enter the number:");
    scanf("%d",&des);
    a=des;
    while(a!=0){
        a=a/10;
        i++;
    }
    a=des;
    while(a!=0)
    {
        b=a%10;
        pos=pos+pow(b,i);
        a=a/10;
        i--;
    }
    if(des==pos)
    {
        printf("%d is disarium number",des);
        }
    else{
        printf("%d is not disarium number",des);
    }

    
    
return 0;
}