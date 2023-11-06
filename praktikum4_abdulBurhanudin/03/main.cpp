#include <iostream>
using namespace std;

int main() {
  int Fibo, num = 0, num1 = 1, nextNum = 0;


    cout << "Jumlah angka deret fibonaci: "; //angka yang mau di fibonaci kan
    cin >> Fibo;

    for(int i = 1; i <= Fibo; i++) { //Rumus menampilkan 2 angka pertama
        if(i == 1) {
            cout << num << " ";
            continue;
        }
        if(i == 2) {
            cout << num1 << " ";
            continue;
        }

        nextNum = num + num1; //proses menampilkan dengan menjumlahkan 2 angka sebelumnya
        num = num1;
        num1 = nextNum;

        cout << nextNum << " ";
    }

  cout << endl;
  return 0;
}
