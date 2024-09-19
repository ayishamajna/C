/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int binarySearch(int arr[], int size, int searchElement) {
    int low = 0, high = size - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == searchElement) {
            return mid; 
        } else if (arr[mid] < searchElement) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    int size, searchElement;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; 

    
    printf("Enter %d sorted elements: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter the element to search: ");
    scanf("%d", &searchElement);


    int result = binarySearch(arr, size, searchElement);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
