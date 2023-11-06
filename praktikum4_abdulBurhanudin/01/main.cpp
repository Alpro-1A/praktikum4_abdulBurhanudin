#include <iostream>

using namespace std;

int main(){
    int batas;
    int jumlahGanjil = 0;
    int jumlahPrima = 0;
    int jumlahGenap = 0;
    int faktorGanjil = 0;
    int faktorPrima = 0;
    int faktorGenap = 0;

    cout << "Program Bilangan Ganjil, Genap, dan Prima" << endl;

    cout << "Masukkan Batas Akhir : ";
    cin >> batas;

    cout << "Bilangan Ganjil : ";

    for (int i = 0; i <= batas; i++){
        if (i % 2 != 0){
            cout << i << " ";
            jumlahGanjil += i;
        }
    }
    cout << endl;

    cout << "Bilangan Genap : ";
    for (int i = 0; i <= batas; i += 2){
        cout << i << " ";
        jumlahGenap += i;
    }
    cout << endl;

    cout << "Bilangan Prima : ";
    for (int i = 2; i <= batas; i++){
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++)
        {
        }
        if (j * j > i){
            cout << i << " ";
            jumlahPrima += i;
        }
    }
    cout << endl;

    cout << "Jumlah Bilangan Ganjil : " << jumlahGanjil << endl;
    cout << "Jumlah Bilangan Genap : " << jumlahGenap << endl;
    cout << "Jumlah Bilangan Prima : " << jumlahPrima << endl;

    cout << "Faktor dari penjumlahan bilangan ganjil : ";
    for (int i = 1; i <= jumlahGanjil; i++) {
    if (jumlahGanjil % i == 0){
        cout << i << " ";
    }
    }
    cout << endl;

     cout << "Faktor dari penjumlahan bilangan genap : ";
    for (int i = 1; i <= jumlahGenap; i++) {
    if (jumlahGenap % i == 0) {
        cout << i << " ";
    }
    }
    cout << endl;

     cout << "Faktor dari penjumlahan bilangan prima : ";
    for (int i = 1; i <= jumlahPrima; i++) {
    if (jumlahPrima % i == 0) {
        cout << i << " ";
    }
    }
    return 0;
}
