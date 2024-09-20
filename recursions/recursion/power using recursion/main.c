/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int power(int a, int b);
int main() {
    int num, k, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter power number: ");
    scanf("%d", &k);
    result = power(num, k);
    printf("%d^%d = %d", num, k, result);
    return 0;
}

int power(int num, int k) {
    if (k != 0)
        return (num * power(num, k - 1));
    else
        return 1;
}