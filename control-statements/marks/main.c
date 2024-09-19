/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int marks;
    printf("enter the mark");
    scanf("%d",marks);
    if(marks>85&&<=100){
        printf("congrats you scored grade A");
    }
    else if(marks>60&&<=85){
        printf("you scored grade B+");
    }
    else if(marks>40&&marks<=60){
        printf("you scored B");
    }
    else if(marks>30&&<=40){
        printf("you scored grade c");
    }
    else
    {
        printf("sorry you are fail");
    }
    }
    return 0;
}