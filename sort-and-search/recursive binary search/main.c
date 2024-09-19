/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int recursiveBinarySearch(int arr[], int low, int high, int searchElement) {
    if (low > high) {
        return -1; 
    }

    int mid = (low + high) / 2;

    if (arr[mid] == searchElement) {
        return mid; 
    } else if (arr[mid] < searchElement) {
        return recursiveBinarySearch(arr, mid + 1, high, searchElement); // Search in right half
    } else {
        return recursiveBinarySearch(arr, low, mid - 1, searchElement); // Search in left half
    }
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


    int result = recursiveBinarySearch(arr, 0, size - 1, searchElement);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

