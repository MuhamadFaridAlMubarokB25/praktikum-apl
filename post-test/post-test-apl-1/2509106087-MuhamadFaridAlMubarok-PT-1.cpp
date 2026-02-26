#include <iostream>
using namespace std;

// g++ 2509106087-MuhamadFaridAlMubarok-PT-1.cpp -o 2509106087-MuhamadFaridAlMubarok-PT-1 ; .\2509106087-MuhamadFaridAlMubarok-PT-1 (Agar Lebih Mudah Di run)

string username, password;
string usernameBenar = "farid";
string passwordBenar = "087";
int percobaan = 1;
int pilihan;

int main () {

    while (percobaan < 4) {
        system("cls");
        cout << "\nSisa Percobaan: " << 4 - percobaan<< endl;

        cout << "\nMasukkan Username: ";
        cin >> username;
        cout << "Masukkan Password: ";
        cin >> password;

        if (username == usernameBenar && password == passwordBenar) {
            cout << "Login Berhasil!" << endl;

            cout << "\n[Tekan Enter Untuk Melanjutkan...]";
            cin.ignore();
            cin.get();

            do {
                
                cout << "Pilih Opsi: ";
                cin >> pilihan;

            } while (pilihan != 4);
            
        } else {
            cout << "Username atau Password salah!";
            percobaan++;
            cout << "\n[Tekan Enter Untuk Melanjutkan...]";
            cin.ignore();
            cin.get();
            continue;;
        }
    }
    

    return 0;
}