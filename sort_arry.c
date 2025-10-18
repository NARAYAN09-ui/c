#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(&arr[low], &arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(&arr[mid], &arr[high]);
                high--;
                break;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, n);

    sort012(arr, n);

    printf("Sorted Array (0s, 1s, 2s): ");
    printArray(arr, n);

    return 0;
}