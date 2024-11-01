#include <iostream>
using namespace std;

int main(){
    int angkaAwal, angkaAkhir, i;
    cout << "Ayo berhitung, masukkan angka awal dan angka akhir" << endl;
    cin >> angkaAwal >> angkaAkhir; 
    while (i <= angkaAkhir - angkaAwal)
    {
        cout << angkaAwal << endl;
        angkaAwal++;
    }
    return 0;

}
