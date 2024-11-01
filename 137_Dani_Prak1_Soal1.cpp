#include <iostream>
using namespace std;

int main(){
    int alas, tinggi;
    cout << "Masukkan Alas dan Tinggi : ";
    cin >> alas >> tinggi;
    double luasSegitiga = 0.5*alas*tinggi;
    int hasilAsli = luasSegitiga;
    cout << "Luas Segitiganya adalah : " << hasilAsli << endl;
    return 0;
}