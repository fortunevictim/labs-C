#include <stdlib.h>
#include <stdio.h>

void swap(int *arr, int i, int j)
{
    int keys = arr[i];
    arr[i] = arr[j];
    arr[j] = keys;
}
void shiftDown(int *arr, int i, int j)
{
    int left = 2 * i + 1;
    int right = left + 1;
    int maximum = left;
    while (maximum < j)
    {
        if (right < j)
        {
            if (arr[left] < arr[right])
            {
                maximum = right;
            }
        }
        if (arr[i] < arr[maximum])
        {
            swap(arr, i, maximum);
        }
        else
        {
            break;
        }
        i = maximum;
        left = 2 * i + 1;
        right = left + 1;
        maximum = left;
    }
}
void heapSort(int *arr, int arrSize)
{
    int i;
    int len = arrSize;
    for (i = len / 2 - 1; i >= 0; i--)
    {
        shiftDown(arr, i, len);
    }
    for (i = len - 1; i > 0; i--)
    {
        swap(arr, 0, i);
        shiftDown(arr, 0, i);
    }
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
    heapSort(numberArray, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", numberArray[i]);
    }
    free(numberArray);
    return 0;
}
