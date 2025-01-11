// Insertion SOrt

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    insertionSort(arr, 5);
    printArray(arr, 5);
    return 0;
}
