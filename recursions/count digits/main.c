/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()  
{  
   int n,count=0;   
   printf("Enter the number:");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   printf("\nThe number of digits are: %d", count);  
    return 0;  
}
