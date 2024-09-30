#include <iostream>
using namespace std;

int main(){
    long long a,b,c,x,n, result;

    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua : ";
    cin >> b;
    cout << "Masukkan angka ketiga : ";
    cin >> c;
    cout << "Masukkan angka batas : ";
    cin >> x;
    
    int kelipatan[] = {3,5,7};
    long long angkaAngka[] = {a,b,c};
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
      {
        if (angkaAngka[i] % kelipatan[j] == 0)
        {
            angkaAngka[i] *= kelipatan[j];
        }else{
            angkaAngka[i] *= 1;
        }
      }
    }
    
    a = angkaAngka[0];
    b = angkaAngka[1];
    c = angkaAngka[2];

    n = a*b*c;
    if (n % 2 == 0)
    {
        result = (n/2) % x;
    }else{
        result = n % x;
    }
    
    cout << result << endl;
    return 0;
}