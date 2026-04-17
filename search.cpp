#include<iostream>
using namespace std;

int main(){
    int arr [] = {1,3,5,7,9,11,13};
    int n = 7;
    int key = 7;

    int left = 0, right = n-1;
    int found = -1;

    while (left <= right){
        int mid = (left + right) / 2;

        if(arr[mid] == key){
            found = mid;
            break;
        }
        else if(arr[mid] > key){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }

    if (found != -1)
        cout << "Found at index " << found;
    else
        cout << "Not found";

    return 0;
}
