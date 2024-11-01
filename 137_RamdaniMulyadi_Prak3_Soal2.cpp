#include <iostream>
using namespace std;

int main(){
    int tinggiSegitiga;
    cout << "Masukan tinggi segitiga mu : ";
    cin >> tinggiSegitiga; 
    for (int i = 1; i <= tinggiSegitiga; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
    
    return 0;

}