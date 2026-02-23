#include <iostream>
using namespace std;

#define reset "\033[30m"
#define hijau "\033[32m"
#define merah "\033[31m"

/* 
Studi Kasus

Buatlah flowchart, pseudocode, dan program yang meminta input Tahun (angka) 
dari pengguna. Program harus menentukan apakah tahun tersebut termasuk Tahun 
Kabisat atau Bukan Tahun Kabisat dengan ketentuan: 
● Jika tahun habis dibagi 400, maka Kabisat. 
● Jika tidak habis dibagi 400, tetapi habis dibagi 100, maka Bukan Kabisat. 
● Jika tidak habis dibagi 100, tetapi habis dibagi 4, maka Kabisat. 
● Selain itu, maka Bukan Kabisat. 
 */


int main () {

    int tahun;

    system("cls");
    cout << "=== Program Untuk Menentukan Tahun Kabisat ===" << endl;
    cout << "\nMasukkan Tahun (1 - Present): ";
    cin >> tahun;

    if (tahun % 400 == 0) {
        cout << hijau << tahun << " adalah Tahun Kabisat" << reset;
    } else if (tahun % 100 == 0) {
        cout << merah << tahun << " bukanlah Tahun Kabisat " << reset;
    } else if (tahun % 4 == 0) {
        cout << hijau << tahun << " adalah Tahun Kabisat" << reset;
    } else {
        cout << merah << tahun << " bukanlah Tahun Kabisat " << reset;
    }

    return 0;
};