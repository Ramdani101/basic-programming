#include <iostream>
using namespace std;

int main(){
    int platNomor;

    cout << "Silahkan masukkan plat nomor anda : ";
    cin >> platNomor;
    if (platNomor % 2 == 0)
    {
        cout << "Plat nomor anda Genap" << endl;
    }else{
        cout << "Plat nomor anda Ganjil" << endl;
    }
        
    return 0;
}

