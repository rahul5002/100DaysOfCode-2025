#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; ++i) {
        int key = arr[i];       
        int j = i - 1;

       
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
            --j;
        }

        arr[j + 1] = key;
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> data = {12, 11, 13, 5, 6};

    cout << "Original array: ";
    printArray(data);

    insertionSort(data);

    cout << "Sorted array:   ";
    printArray(data);

    return 0;
}
