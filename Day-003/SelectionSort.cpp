// Selection Sort 

#include <iostream>
using namespace std;

void selectionsort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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
    selectionsort(arr, 5);
    printArray(arr, 5);
    return 0;
}

