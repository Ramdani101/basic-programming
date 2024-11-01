#include <iostream>
using namespace std;

int main(){
    int nim,kebalikan,temp, nilaiAwal;
    cout << "Masukan NIM mu yang akan dicek: ";
    cin >> nim; 
    while (nim <= 0)
    {
        cout << "Nim mu tidak valid, coba masukkan lagi";
        cin >> nim;
    }
    
    nilaiAwal = nim;

    while (nim > 0)
    {
       temp = nim % 10;
       kebalikan = kebalikan * 10 + temp;
       nim /= 10;
    }

    if (nilaiAwal == kebalikan)
    {
        cout << "Palindrome" << endl;
    }else {
        cout << "Bukan Palindrome" << endl;
    }
        
    return 0;

}