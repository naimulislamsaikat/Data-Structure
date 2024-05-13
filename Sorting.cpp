#include <iostream>
using namespace std;

struct student {

    string name;
    string id;
    float cgpa;

};

class sort{

public:

    void bubble( student stu[], int n ){
        for( int i = 0; i < n; i++ ){
            for( int j = 0; j < ( n-i-1 ); j++ ){
                if( stu[j].cgpa > stu[j+1].cgpa){
                    swap ( stu[j], stu[j+1] );
                }
            }
        }
        cout << "Bubble Sort: " << endl << endl;
        for( int i = 0; i < n; i++ ){
                cout << "Name: " << stu[i].name << endl;
                cout << "ID: " << stu[i].id << endl;
                cout << "CGPA: " << stu[i].cgpa << endl <<endl;
        }
    }
    void selection(student stu[], int n){
        for( int i = 0; i<n; i++){
            for( int j = i+1; j<n; j++ ){
                if( stu[i].cgpa > stu[j].cgpa ){
                    swap( stu[i],stu[j] );
                }
            }
        }
        cout << "Selection Sort: " << endl <<endl;
        for( int i = 0; i < n; i++ ){
                cout << "Name: " << stu[i].name << endl;
                cout << "ID: " << stu[i].id << endl;
                cout << "CGPA: " << stu[i].cgpa << endl << endl;
        }
    }
    void insertion(student stu[], int n){
        for( int i = 1; i<n; i++){
            for( int j = i-1; j>=0; j-- ){
                if( stu[i].cgpa < stu[j].cgpa ){
                    swap( stu[i],stu[j] );
                }
            }
        }
        cout << "Insertion Sort: " << endl << endl;
        for( int i = 0; i < n; i++ ){
                cout << "Name: " << stu[i].name << endl;
                cout << "ID: " << stu[i].id << endl;
                cout << "CGPA: " << stu[i].cgpa << endl;
        }
    }
    void binary(student stu[], int n) {
        int k = 0;
        float s;
        cout << "Give the CGPA to search information of student: ";
        cin >> s;

        // checking that is it sorted or not

        for ( int i = 0; i <= (n - 2); i++ ) {
                if ( stu[i].cgpa < stu[i + 1].cgpa ) {
                    k++;
                }
                else break;
        }

        if ( k == (n - 1) ) {
                int first = 0;
                int last = (n - 1);
                int mid;

                while ( first <= last ) {
                        mid = ( last + first ) / 2;
                        if ( s == stu[mid].cgpa ) {
                                cout << "Name: " << stu[mid].name << endl;
                                cout << "Id: " << stu[mid].id << endl;
                                cout << "CGPA: " << stu[mid].cgpa<<endl;
                                break;
                        }
                        else if ( s > stu[mid].cgpa ) {
                                //last = (mid - 1);
                                first = mid + 1;
                        }
                        else {
                            last = (mid - 1);
                            //first = mid + 1;
                        }
                }
                cout << "Element not found" <<endl;
        }
        else {
                cout << "Not sorted" <<endl;
        }
    }
};

int main(){

    int n1;
    cout << "How many students information you want to store: " ;
    cin >> n1;

    cout << "Give Inputs: " << endl;

    student* stu = new student [n1];

    for ( int i = 0; i < n1; i++ ){
        cout << "Name: ";
        cin >> stu[i].name;
        cout << "ID: ";
        cin >> stu[i].id;
        cout << "CGPA: ";
        cin >> stu[i].cgpa;
        cout << endl;
    }
    sort st;
    int a;
    string q;

    do{
    cout << "If you want Bubble sort then press 1" << endl;
    cout << "If you want Selection sort then press 2" << endl;
    cout << "If you want Insertion sort then press 3" << endl;
    cout << "If you want Binary search then press 4" << endl;
    cout << "Or you want to exit then press 5" << endl;
    cout << "So Which sorting you want to do?" << endl;
    cout << "Answer: ";
    cin >> a;
    cout << endl;

    if( a == 1 ){
        st.bubble(stu, n1);
    }
    else if( a == 2 ){
        st.selection(stu, n1);
    }
    else if( a == 3 ){
        st.insertion(stu, n1);
    }
    else if( a == 4 ){
        st.binary(stu, n1);
    }
    else if( a == 5 ){
        break;
    }
    else{
        cout << "Wrong input! Try again." << endl;
        exit(0);
    }

    cout << "Do you want to do the operations again then press (Y/N) :  ";
    cin >> q;
    cout << endl;
    }
    while ( q == "Y" );

return 0;
}
