/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void prime(int);
void main()
{
int num = 11;
    int isPrime = 1;
prime(num);
}
void prime(int num)
{
    int isPrime;
    if (num <= 1) {
        isPrime = 0;
    } else if (num % 2 == 0 && num != 2) {
        isPrime = 0;
    } else if (num % 3 == 0 && num != 3) {
        isPrime = 0;
    } else if (num % 5 == 0 && num != 5) {
        isPrime = 0;
    } else if (num % 7 == 0 && num != 7) {
        isPrime = 0;
    } 

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}