/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[10],c,n,i,j;
    printf("enter the size of array:");
    scanf("%d",&c);
    printf("enter the elements:");
    for(i=0;i<c;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i>c;i++)
    {
    for(j=+1;j<c;j++)
    {
        if(arr[j]>arr[i])
        {
        n=arr[i];
        arr[j]=arr[i];
        arr[j]=n;
        }
        
    }
    }
    for(i=0;i<c;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

   