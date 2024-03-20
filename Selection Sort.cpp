#include<iostream>
using namespace std;

int selection(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
            }
            cout<<"Steps are:\n";
            for(int j=0; j<n; j++){
                cout<<arr[j]<<endl;
            }
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selection(arr, n);
    cout<<"Sorted array: ";
    printArray(arr, n);

    return 0;
}
