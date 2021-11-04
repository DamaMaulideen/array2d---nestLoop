#include <iostream>
using namespace std;

int main(){

    int a = 0, b = 0;

    //no,1
    for (a = 0; a < 5; a++){
        for (b = 0; b < 5; b++){

            if (b < 2)
            {
                cout << 1 << "\t";
            } else {
                cout << 0 << "\t";
            }  
        }
        cout << endl;
    }

    cout << endl;

    //no.2
    for (a = 0; a < 5; a++){
        for (b = 0; b < 5; b++){

            if (a < 3)
            {
                cout << 1 << "\t";
            } else {
                cout << 0 << "\t";
            }  
        }
        cout << endl;
    }

    cout << endl;

    //no.3
    for ( a = 0; a < 5; a++){
        for ( b = 0; b < 5; b++){
            if (b == a)
            {
                cout << 0 << "\t";
            } else {
                cout << 1 << "\t";
            }  
        }
        cout << endl;
    }
    

}