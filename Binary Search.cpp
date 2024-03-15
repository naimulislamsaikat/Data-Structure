#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int s){
    int low = 0, high = n - 1;

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

int main(){
    int n, s;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in sorted order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search: ";
    cin>>s;

    int result=binarySearch(arr, n, s);

    if(result == -1){
        cout<<"Element is not present in array"<<endl;
    }
    else{
        cout<<"Element is present at index "<<result<<endl;
    }

return 0;
}
