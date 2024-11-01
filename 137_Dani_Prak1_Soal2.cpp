#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A, B;
    cout << "Masukkan Nilai A : ";
    cin >> A;
    cout << "Masukkan Nilai B : ";
    cin >> B;

    // swap(A, B);

    A = A + B;
    B = A - B;
    A = A - B;

    cout << "Setelah dibalik, nilainya menjadi" << endl <<
            "A = " << A << endl <<
            "B = " << B << endl;

    return 0;
}