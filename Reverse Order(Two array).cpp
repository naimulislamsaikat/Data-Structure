#include<iostream>
using namespace std;

int main(){

    int a1, a2;
    cout << "1st array size : ";
    cin >> a1;
    cout << "2nd array size : ";
    cin >> a2;

    int arr_1[a1];
    int arr_2[a2];

    cout << "Array_1: ";
    for( int i=0; i<a1; i++ ){
            cin >> arr_1[i];
    }

    cout << "Array_2: ";
    for( int i=0; i<a2; i++ ){
            cin >> arr_2[i];
    }

    int n = a1+a2;
    int new_arr[n];
    int i = 0;
    int j = 0;

    cout << endl;

    while( i < a1 ){
        for( int k=0; k<a1; k++ ){
            new_arr[k] = arr_1[i];
            i++;
            }
    }

    while( j < a2 ){
        for( int k=a1; k<n; k++ ){
           new_arr[k] = arr_2[j];
            j++;
            }

    }

    for( int k=n-1; k>=0; k-- ){
        cout << new_arr[k] << " ";
    }

return 0;
}
