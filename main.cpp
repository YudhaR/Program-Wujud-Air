#include <iostream>

/*
    Program wujud air
    Ket : Program menentukan wujud air berdasarkan suhu
    By  : Yudha Rizqia Grafer
    Tgl : 14 Oktober 2022

*/

using namespace std;

int main()
{
    //kamus
    int s;

    //algoritma
    cout << "Masukkan Suhu : ";
    cin >> s;
    if ( s <= 0 ){
        cout << "Beku";
    }else if (s <= 100){
    cout << "Cair";
    }else{
    cout << "Uap";
    }
    return 0;
}
