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

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        for (int j=i-1; j>=0; j--){
            if(arr[j+1] < arr[j]){
                swap(arr[j+1], arr[j]);
            }
        }
    }
}

int binarySearch(int arr[], int n, int s){

    insertionSort(arr, n);

    int low=0, high=n - 1;

    while(low <= high){
        int mid=low+(high-low)/2;

        if(arr[mid] == s){
            return mid;
        }
        else if(arr[mid] < s){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
return 0;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int n, s, result;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search: ";
    cin>>s;

    int choice;
    cout<<"Enter 1 for linear search, 2 for binary search ";
    cin>>choice;

    if(choice == 1){
        result=linearSearch(arr, n, s);
    }
    else if(choice == 2){
        result=binarySearch(arr, n, s);
    }
    else{
        cout<<"Invalid choice"<<endl;
        return 0;
    }

    if(result == -1){
        cout<<"Element is not present in array"<<endl;
    }
    else{
        cout<<"Sorted array: ";
        printArray(arr, n);
        cout<<"Element is present at index: "<<result<<endl;
    }

return 0;
}
