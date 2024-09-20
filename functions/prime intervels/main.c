/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int Prime(int n);
int main() {

  int n1, n2, i, num;

  printf("Enter two numbers: ");
  scanf("%d %d", &n1, &n2);


  if (n1 > n2) {
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
  }

  printf("Prime numbers between %d and %d are: ", n1, n2);
  for (i = n1 + 1; i < n2; i++) {


    num = Prime(i);

    if (num == 1) {
      printf("%d ", i);
    }
  }
  
  return 0;
}

int Prime(int n) {
  int j, num = 1;

  for (j = 2; j <= n / 2; j++) {

    if (n % j == 0) {
      num = 0;
      break;
    }
  }

  return num;
}
