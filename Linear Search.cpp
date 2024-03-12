#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int s){
    for(int i=0; i<n; i++){
        if(arr[i] == s){
            return i;
        }
    }
    return 0;
}

int main(){
    int n, s;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search: ";
    cin>>s;

    int result=linearSearch(arr, n, s);

    if(result == -1){
        cout<<"Element not found in the array"<<endl;
    }
    else{
        cout<<"Element found at index: "<<result<<endl;
    }

return 0;
}
