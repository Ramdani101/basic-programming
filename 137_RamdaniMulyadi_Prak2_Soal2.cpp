#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout << "Masukkan koordinat x dan y secara berurutan";
    cin >> x >> y;

    if (x > 0 && y >> 0)
    {
        cout << "Kuadran I";
    }else if (x < 0 && y > 0)
    {
        cout << "Kuadran II";
    }else if (x < 0 && y < 0)
    {
        cout << "Kuadran III";
    }else if (x > 0 && y < 0)
    {
        cout << "Kuadran IV";
    }else if (x == 0 && y == 0)
    {
        cout << "Pusat";
    }else if (x != 0 && y == 0)
    {
        cout << "Sumbu X";
    }else if (x == 0 && y != 0)
    {
        cout << "Sumbu Y";
    }
    
    return 0;
    
}
