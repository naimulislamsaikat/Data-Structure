#include<iostream>
using namespace std;

int main(){

    int arr[10];

    cout<<"Input: ";
    for (int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Output: ";
    for (int i=9; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}
