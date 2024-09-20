/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <math.h>
#include <stdio.h>

int Prime(int );
int Armstrong(int );

int main() 
{
   int n, num,a,d;
   printf("Enter a number: ");
   scanf("%d", &n);
    a=n;
    d=n;
   
   num = Prime(n);
   if (num == 1)
   {
      printf("%d is a prime number.\n", n);
   }
   else
   {
      printf("%d is not a prime number.\n", n);
}

   num = Armstrong(a);
   if (num == d)
   {
      printf("%d is an Armstrong number.", n);
   }
   else
   {
      printf("%d is not an Armstrong number.", n);
   }
   return 0;
}

int Prime(int n)
{
   int i,b;
    for(int i=2;i<b;i++)
    {
        if(b%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
   int Armstrong(int b)
   {
    int c,j,a,power=0,mod;
    c=b;
    
    while(c!=0)
    {
        c=c/10;
        j++;
    }
    printf("length:%d",j);
    a=b;
    
    while(a>0)
    {
        mod=a%10;
        power=power+pow(mod,j);
        a=a/10;
    }
   return power;
  
}
