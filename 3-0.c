#include <stdio.h>
#include <stdlib.h>

void swap(int *arr, int i, int j)
{
    int keys = arr[i];
    arr[i] = arr[j];
    arr[j] = keys;
}

void quickSort(int* arr, int first, int last)
{
    int i = first;
    int j = last;
    int centr = arr[(first + last) / 2];
    do
    {
        while (arr[i] < centr)
            i++;
        while (centr < arr[j])
            j--;
        if (i <= j)
        {
            if (i < j)
            {
                swap(arr, i, j);
            }
            i++;
            j--;
        }
    }
    while (i <= j);
    if (i < last)
        quickSort(arr, i, last);
    if (first < j)
        quickSort(arr, first, j);
}

int FillArr(int *numberArray, int n){
    if (numberArray == NULL) return 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += (scanf("%d", &numberArray[i]));
    }
    if (cnt != n) return 0;
    return 0;
}

int main()
{
    int n,i;
    if (scanf("%d", &n) != 1) return 0;
    if (n < 1) return 0;
    int *numberArray = NULL;
    if (n <= 2000000) {
        numberArray = (int*)malloc(n * sizeof(int));
    }
    if (!numberArray) return 0;
    FillArr(numberArray,n);
    quickSort(numberArray, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        printf("%d ", numberArray[i]);
    }
    free(numberArray);
    return 0;
}
