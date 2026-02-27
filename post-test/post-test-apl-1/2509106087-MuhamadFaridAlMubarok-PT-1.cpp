#include <iostream>
using namespace std;

// g++ 2509106087-MuhamadFaridAlMubarok-PT-1.cpp -o 2509106087-MuhamadFaridAlMubarok-PT-1 ; .\2509106087-MuhamadFaridAlMubarok-PT-1 (Agar Lebih Mudah Di run)

#define merah   "\033[31m"
#define biru    "\033[34m"
#define hijau   "\033[32m"
#define cyan    "\033[36m"
#define magenta "\033[35m"
#define putih   "\033[0m"
#define abu     "\033[90m"

int main () {

    string username, password;
    string usernameBenar = "farid";
    string passwordBenar = "087";
    int percobaan = 1;
    int pilihan;

    while (percobaan <= 3) {
        system("cls");
        
        cout << "===============================\n";
        cout << "|                             |\n";
        cout << "|  APLIKASI KONVERSI PANJANG  |\n";
        cout << "|                             |\n";
        cout << "===============================\n";
        
        cout << hijau << "\nSilahkan Login Terlebih Dahulu" << putih << endl;

        cout << "\nMasukkan Username: ";
        cin >> username;
        cout << "Masukkan Password: ";
        cin >> password;

        if (username == usernameBenar && password == passwordBenar) {
            cout << hijau << "Login Berhasil!" << putih <<endl;
            cout << abu << "\n[Tekan Enter Untuk Melanjutkan...]" << putih;
            cin.ignore(10000, '\n');
            cin.get();


            do {
                system("cls");
                
                cout << "===========================================\n";
                cout << "|              PILIH KONVERSI             |\n";  
                cout << "===========================================\n";
                cout << "| " << biru << "[1]. Meter -> Kilometer dan Centimeter" << putih <<"  |\n";
                cout << "| " << cyan << "[2]. Kilometer -> Meter dan Centimeter" << putih <<"  |\n";
                cout << "| " << magenta << "[3]. Centimeter -> Meter dan Kilometer" << putih <<"  |\n";
                cout << "| " << merah << "[4]. Keluar" << putih <<"                             |\n";
                cout << "===========================================\n";
                cout << "Masukkan Opsi: ";
                cin >> pilihan;
                
                switch (pilihan)
                {
                case 1: {
                    double panjang;
                    double hasilKilometer = 0;
                    double hasilCentimeter = 0;

                    cout << biru << "\n--- Konversi Meter Ke Kilometer dan Centimater ---\n";
                    cout << "\nMasukkan Angka: ";
                    cin >> panjang;

                    hasilKilometer = panjang / 1000;
                    hasilCentimeter = panjang * 100;
                    
                    cout << "\nHasil Konversi dari " << panjang << " Meter Adalah:\n";
                    cout << "-> " << hasilKilometer << " Kilometer\n"; 
                    cout << "-> " << hasilCentimeter << " centimeter\n" << putih;

                    cout << abu << "\n[Tekan Enter Untuk Melanjutkan...]" << putih;
                    cin.ignore(10000, '\n');
                    cin.get();
                    break;
                }
                case 2: {
                    double panjang;
                    double hasilMeter = 0;
                    double hasilCentimeter = 0;

                    cout << cyan << "\n--- Konversi Kilometer Ke Meter dan Centimater ---\n";
                    cout << "\nMasukkan Angka: ";
                    cin >> panjang;

                    hasilMeter = panjang * 1000;
                    hasilCentimeter = panjang * 100000;
                    cout << "\nHasil Konversi dari " << panjang << " Kilometer Adalah:\n";
                    cout << "-> " << hasilMeter << " Meter\n"; 
                    cout << "-> " << hasilCentimeter << " Centimeter\n" << putih;
                    cout << abu << "\n[Tekan Enter Untuk Melanjutkan...]" << putih;
                    cin.ignore(10000, '\n');
                    cin.get();
                    break;
                }
                case 3:{
                    double panjang;
                    double hasilMeter = 0;
                    double hasilKilometer = 0;

                    cout << magenta << "\n--- Konversi Centimeter Ke Meter dan Kilometer ---\n";
                    cout << "\nMasukkan Angka: ";
                    cin >> panjang;

                    hasilMeter = panjang / 100;
                    hasilKilometer = panjang / 100000.0;
                    cout << "\nHasil Konversi dari " << panjang << " Centimeter Adalah:\n";
                    cout << "-> " << hasilMeter << " Meter\n"; 
                    cout << "-> " << hasilKilometer << " Kilometer\n" << putih;
                    cout << abu << "\n[Tekan Enter Untuk Melanjutkan...]" << putih;
                    cin.ignore(10000, '\n');
                    cin.get();
                    break;
                }
                case 4:{
                    cout << merah <<"\nAnda Keluar dari program. :)\n" << putih;
                    
                    cout << abu << "\n[Tekan Enter Untuk Melanjutkan...]" << putih;
                    cin.ignore(10000, '\n');
                    cin.get();
                    break;
                }
                
                default:
                    cout << merah << "Error: Pilihan Tidak Valid!" << putih << endl;
                    cout << abu << "\n[Tekan Enter Untuk Melanjutkan...]" << putih;
                    cin.ignore(10000, '\n');
                    cin.get();
                    continue;
                }

            } while (pilihan != 4);

            break;

        } else if (percobaan == 3) {
            cout << merah << "\nKesempatan login habis. Akses ditolak!\n" << putih;
            cout << "Jumlah percobaan: " << percobaan++ << endl;
            cout << '\n'; 
            break;

        } else {
            cout << merah << "\nUsername atau Password salah! Silahkan Coba Lagi" << putih;
            percobaan++;
            cout << "\nJumlah percobaan: " << percobaan - 1 << endl; 
            cout << abu << "\n[Tekan Enter Untuk Melanjutkan...]" << putih;
            cin.ignore(10000, '\n');
            cin.get();
            continue;

        }
    }
    
    return 0;
}