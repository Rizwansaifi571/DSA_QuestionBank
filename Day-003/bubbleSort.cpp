// bubble sort

#include <iostream>
using namespace std;

void bubblesort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j + 1] < arr[j]) {
                swap(arr[j + 1], arr[j]);
                swapped = true;
            }
        }
        if(!swapped) {
            break;
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