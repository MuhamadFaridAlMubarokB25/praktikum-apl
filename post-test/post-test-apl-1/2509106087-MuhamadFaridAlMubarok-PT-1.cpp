#include <iostream>
using namespace std;

// g++ 2509106087-MuhamadFaridAlMubarok-PT-1.cpp -o 2509106087-MuhamadFaridAlMubarok-PT-1 ; .\2509106087-MuhamadFaridAlMubarok-PT-1 (Agar Lebih Mudah Di run)


int main () {
    
    string username, password;
    string usernameBenar = "farid";
    string passwordBenar = "087";
    int percobaan = 1;
    int pilihan;

    while (percobaan <= 3) {
        system("cls");

        cout << "+----------------------------------------------------------------------------+\n";
        cout << "|                                                                            |\n";
        cout << "|     Aplikasi Kalkulator Konversi Jarak (Meter, Kilometer, Centimeter)      |\n";
        cout << "|                                                                            |\n";
        cout << "+----------------------------------------------------------------------------+\n";

        cout << "\nSilahkan Login Terlebih Dahulu" << endl;

        cout << "\nMasukkan Username: ";
        cin >> username;
        cout << "Masukkan Password: ";
        cin >> password;

        if (username == usernameBenar && password == passwordBenar) {
            cout << "Login Berhasil!" << endl;

            cout << "\n[Tekan Enter Untuk Melanjutkan...]";
            cin.ignore(10000, '\n');
            cin.get();

            do {
                system("cls");

                cout << "Pilih Opsi: ";
                cin >> pilihan;

            } while (pilihan != 4);
            
        } else {
            cout << "\nUsername atau Password salah!";
            percobaan++;
            cout << "\nJumlah percobaan: " << percobaan - 1 << endl; 
            cout << "\n[Tekan Enter Untuk Melanjutkan...]";
            cin.ignore(10000, '\n');
            cin.get();
            continue;

            if (percobaan <= 3) {
            cout << "Kesempatan login habis. Akses ditolak!\n";
            } 
        }
    }
    
    return 0;
}