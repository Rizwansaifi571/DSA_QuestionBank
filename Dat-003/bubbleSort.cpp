// bubble sort

#include <iostream>
using namespace std;

void bubblesort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i; j++) {
            if(arr[j + 1] < arr[j]) {
                swap(arr[j + 1], arr[j]);
            }
        }
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
    bubblesort(arr, 5);
    printArray(arr, 5);

}