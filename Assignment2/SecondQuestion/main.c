#include <stdio.h>
#include <stdlib.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int m)
{
    int a, b, min_idx;

    for (a = 0; a < m - 1; a++) {



        min_idx = a;
        for (b = a + 1; b < m; b++)
            if (arr[b] < arr[min_idx])
                min_idx = b;

        swap(&arr[min_idx], &arr[a]);
    }
}

void printArray(int arr[], int size)
{
    int a;
    for (a = 0; a < size; a++)
        printf("%d ", arr[a]);
    printf("\n");
}

int main()
{
    int arr[] = { 40, 3, 28, 32, 14 };
    int m = sizeof(arr) / sizeof(arr[0]);
    printf("Inital array: \n");
    printArray(arr, m);

    selectionSort(arr, m);
    printf("\nSorted array in increasing order: \n");
    printArray(arr, m);

    return 0;
}
