//find unique element in a array ? 

#include<iostream>
using namespace std;

int findUnique(int arr[], int n) {
    int result = 0;
    for(int i = 0; i < n; i++) {
        result ^= arr[i];  // XOR operation
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};  // 3 is the unique element
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique element is: " << findUnique(arr, size) << endl;

    return 0;
}
