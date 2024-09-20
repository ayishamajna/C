/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int num,length,c,g=0,r,ans=0;
    printf("Armstrong numbers b/w 1-1000 are :");
      for (num = 1; num <= 1000; num++) {
        g = 0;
        ans = 0;



    c=num;
    while(c!=0){
    c=c/10;
    g++;
    }



    c=num;
    while (c!=0) {
        r=c%10;
        ans=ans+pow(r,g);
        c=c/10;
       }



    if(ans==num){
        printf("%d ",num);
    }

        }

    return 0;
}
