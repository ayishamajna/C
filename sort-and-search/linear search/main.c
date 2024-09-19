/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void linearSearch(int arr[], int size, int searchElement) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == searchElement) {
            printf("Element found at index: %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}

int main() {
    int size, searchElement;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; 

    printf("Enter %d elements: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    linearSearch(arr, size, searchElement);

    return 0;
}