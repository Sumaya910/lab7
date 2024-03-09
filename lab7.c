#include <stdio.h>

#define ARRAY_SIZE 9

void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}

void bubbleSort(int arr[], int n) {
    int i, j,temp;
    int swapTotal= 0;
    int swaps[ARRAY_SIZE] = {0};
    for (int i = 0; i < n; i++)
    {
        swaps[i] = 0;
    }
    for (i = 0; i < n - 1; i++) {
        temp = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                temp = 1;
                swaps[j]++;
                swaps[j + 1]++;
            temp = swaps[j];
            swaps[j] = swaps[j + 1];
            swaps[j + 1] = temp;
            swapTotal += 2; 
            }
        }
        }
        for (int i = 0; i < n; i++)
      {
        printf("%d: %d\n", arr[j], swaps[j]);
      }
        printf("total # of swaps: %d\n", swapTotal / 2);
    }


void selectionSort(int arr[], int n) {
    int i, j, temp, minIndex;
    int swapTotal= 0;
    int swaps[ARRAY_SIZE] = {0};
 for (int i = 0; i < n; i++)
    {
        swaps[i] = 0;
    }

    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
            swaps[minIndex]++;
            swaps[i]++;
             temp = swaps[minIndex];
            swaps[minIndex] = swaps[i];
            swaps[i] = temp;
            swapTotal += 2; 
        }
    }
    for (int i = 0; i < n; i++)
      {
        printf("%d: %d\n", arr[i], swaps[i]);
      }
        printf("total # of swaps: %d\n", swapTotal / 2);
}


int main() {
    int arr1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int arr2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

   

    return 0;

}