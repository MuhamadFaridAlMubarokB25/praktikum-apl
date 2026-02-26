#include <iostream>
using namespace std;

// g++ 2509106087-MuhamadFaridAlMubarok-PT-1.cpp -o 2509106087-MuhamadFaridAlMubarok-PT-1 ; .\2509106087-MuhamadFaridAlMubarok-PT-1 (Agar Lebih Mudah Di run)

string username, password;
string usernameBenar = "farid";
string passwordBenar = "087";
int percobaan = 1;
int pilihan;

int main () {

    while (percobaan <= 3) {
        system("cls");
        cout << "\nSisa Percobaan: " << 3 - percobaan << endl;

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
                system("cls");

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

        if (login == 3) {
            cout << RED << "Kesempatan login habis. Akses ditolak!\n" << RESET;
            return 0;
        }
    }
    

    return 0;
}