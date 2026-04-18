#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,8,1,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    //Bubble sort
    for(int i = 0; i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "Sorted array: ";
    for(int i = 0; i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    //selection sort
    for(int i = 0;i<n-1;i++){
         int mindIndex = i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j]<arr[mindIndex]){
                mindIndex= j;
            }
        }
         swap(arr[i],arr[mindIndex]);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}