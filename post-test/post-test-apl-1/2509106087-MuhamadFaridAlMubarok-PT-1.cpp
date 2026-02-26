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
        
        cout << "+------------------------------------------------------------+\n";
        cout << "|                                                            |\n";
        cout << "|  APLIKASI KONVERSI PANJANG (Meter, Kilometer, Centimeter)  |\n";
        cout << "|                                                            |\n";
        cout << "+------------------------------------------------------------+\n";
        
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
                
                cout << "+-----------------------------------------+\n";
                cout << "|              PILIH KONVERSI             |\n";  
                cout << "+-----------------------------------------+\n";
                cout << "| [1]. Meter -> Kilometer dan Centimeter  |\n";
                cout << "| [2]. Kilometer -> Meter dan Centimeter  |\n";
                cout << "| [3]. Centimeter -> Meter dan Kilometer  |\n";
                cout << "| [4]. Keluar                             |\n";
                cout << "+-----------------------------------------+\n";
                cout << "Masukkan Opsi: ";
                cin >> pilihan;
                
                switch (pilihan)
                {
                case 1: {
                    double meter;
                    double hasilKilometer = 0;
                    double hasilCentimeter = 0;
        
                    cout << "\n--- Konversi Meter Ke Kilometer dan Centimater ---\n";
                    cout << "\nMasukkan Angka: ";
                    cin >> meter;
        
                    hasilKilometer = meter / 1000;
                    hasilCentimeter = meter * 100;
        
                    cout << "\nHasil Konversi dari " << meter << " Meter Adalah:\n";
                    cout << "-> " << hasilKilometer << " Kilometer\n"; 
                    cout << "-> " << hasilCentimeter << " centimeter\n";
        
                    cout << "\n[Tekan Enter Untuk Melanjutkan...]";
                    cin.ignore(10000, '\n');
                    cin.get();
                    break;
                };
                case 2: {
                    double kilometer;
                    double hasilMeter = 0;
                    double hasilCentimeter = 0;
        
                    cout << "\n--- Konversi Kilometer Ke Meter dan Centimater ---\n";
                    cout << "\nMasukkan Angka: ";
                    cin >> kilometer;
        
                    hasilMeter = kilometer * 1000;
                    hasilCentimeter = kilometer * 100000;
        
                    cout << "\nHasil Konversi dari " << kilometer << " Meter Adalah:\n";
                    cout << "-> " << hasilMeter << " Kilometer\n"; 
                    cout << "-> " << hasilCentimeter << " centimeter\n";
        
                    cout << "\n[Tekan Enter Untuk Melanjutkan...]";
                    cin.ignore(10000, '\n');
                    cin.get();
                    break;
                };
                case 3:{
                    double centimeter;
                    double hasilMeter = 0;
                    double hasilKilometer = 0;
        
                    cout << "\n--- Konversi Kilometer Ke Meter dan Centimater ---\n";
                    cout << "\nMasukkan Angka: ";
                    cin >> centimeter;
        
                    hasilMeter = centimeter / 100;
                    hasilKilometer = centimeter / 100000.0;
        
                    cout << "\nHasil Konversi dari " << centimeter << " Meter Adalah:\n";
                    cout << "-> " << hasilMeter << " Kilometer\n"; 
                    cout << "-> " << hasilKilometer << " centimeter\n";
        
                    cout << "\n[Tekan Enter Untuk Melanjutkan...]";
                    cin.ignore(10000, '\n');
                    cin.get();
                    break;
                }
                case 4:{
                    cout << "\nAnda Keluar dari program\n";
        
                    cout << "\n[Tekan Enter Untuk Melanjutkan...]";
                    cin.ignore(10000, '\n');
                    cin.get();
                    break;
                }
        
                default:
                    cout << "Pilihan Tidak Valid!" << endl;
                    cout << "\n[Tekan Enter Untuk Melanjutkan...]";
                    cin.ignore(10000, '\n');
                    cin.get();
                    break;
                }
        
            } while (pilihan != 4);

        } else {
            cout << "\nUsername atau Password salah! Silahkan Coba Lagi";
            percobaan++;
            cout << "\nJumlah percobaan: " << percobaan - 1 << endl; 
            cout << "\n[Tekan Enter Untuk Melanjutkan...]";
            cin.ignore(10000, '\n');
            cin.get();
            continue;

            if (percobaan <= 3) {
            cout << "Kesempatan login habis. Akses ditolak!\n";
            cout << "\n[Tekan Enter Untuk Melanjutkan...]";
            cin.ignore(10000, '\n');
            cin.get();
            break;
            } 
        }
    }

    
    return 0;
}