#include <stdio.h>
void bubbleSort(int arr[], int length) {
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }};
  int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int length = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, length);
    for (int i = 0; i < length; i++) {
      printf("%d ", arr[i]);
    }
    return 0;
  }
