#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    //ARRAY TRAVERSING
    cout<<"\nArray Traversing\n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }


    // SUM OF ARRAY
    cout<<"\nArray Sum\n";
    int sum = 0;
    for(int i=0;i<5;i++){
        sum = sum + arr[i];
    }
    cout << "Sum of array is " << sum << endl;

    // maximum number in array
    cout<<"\nMaximum number in array\n";
    int max = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << "Maximum number in array is " << max << endl;

    // minimum number in array
    cout<<"\nMinimum number in array\n";
    int min = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "Minimum number in array is " << min << endl;

    //Reverse array
    cout<<"\nReverse array\n";
    int j = 4;
    for(int i=0;i<5;i++){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }

    // Linear Search
    cout<<"\nLinear Search\n";
    int key = 20;
    bool found = false;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            cout<<"Key found at index "<<i<<endl;
            found = true;
            break;
        }
        }
    if(!found){
        cout<<"Key not found"<<endl;
    }


    return 0;
}
