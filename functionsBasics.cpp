#include <iostream>
using namespace std;
//maximum array
void findMax(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    cout << "Maximum number in array is " << max << endl;
}

//minimum array
void findMin(int arr[], int n){
   int min = arr[0];
   for(int i = 0; i<n;i++){
    if(arr[i]<min){
        min = arr[i];
    }
   } 
   cout << "Minimum number in array is " << min << endl;
}
//linear search
int linearSearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i]==key){
            return i; // return index
        }
    }
    return -1; //not found
}

//Reverse array
void reverseArray(int arr[],int n){
    int j = n-1;
    for(int i = 0;i<n/2;i++){
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j]= temp;
        j--;
    }
}


int main(){
    int arr [] = {1,8,3,4,10};
    int size = 5;
    int key = 10;
    findMax(arr, size);
    findMin(arr,5);
    int result = linearSearch(arr, size, key);

    if (result != -1)
        cout << "Element found at index " << result<<endl;
    else
        cout << "Element not found"<<endl;

    reverseArray(arr,size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
   
    return 0;
}

