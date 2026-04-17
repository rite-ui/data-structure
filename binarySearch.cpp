#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1; // not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = 7;
    int key = 7;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Found at index " << result;
    else
        cout << "Not found";

    return 0;
}
