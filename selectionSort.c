#include <stdio.h>
 void SelectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }
 }
int main(){
    int arr[]={5, 2, 4, 6, 1, 3} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr, n);
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}