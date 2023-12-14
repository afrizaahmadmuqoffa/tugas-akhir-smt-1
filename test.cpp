#include<iostream>
#include<vector>

using namespace std;

struct Barang {
    int kode;
    string nama;
};

void menu(){
        cout << "\nMenu:" << endl;
        cout << "1. Input Barang" << endl;
        cout << "2. Tampilkan Semua Barang" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih: ";
}

int main() {
    Barang listBarang[99999];
    int pilihan;
    int jumlahBarang = 0;

    do {
        menu();
        cin >> pilihan;

        if (pilihan == 1) {
            int kodeBarang;
            string namaBarang;

            cout << "Masukkan Kode Barang: ";
            cin >> kodeBarang;
            cout << "Masukkan Nama Barang: ";
            cin.ignore();
            getline(cin, namaBarang);

            jumlahBarang += 1;
            listBarang[jumlahBarang].kode = kodeBarang;
            listBarang[jumlahBarang].nama = namaBarang;
            cout << "\n" <<namaBarang <<" berhasil ditambahkan!\n";
        } else if (pilihan == 2) {
            if (jumlahBarang > 0) {
                cout << "\nDaftar Barang:\n";
                for (int i = 1; i <= jumlahBarang; ++i) {
                    cout <<i<< ". Kode: " << listBarang[i].kode << ", Nama: " << listBarang[i].nama << endl;
                }
            } else {
                cout << "Belum ada barang yang diinput.\n";
            }
        } else if (pilihan != 3) {
             cout << "\nInput tidak valid. Harap masukkan angka antara 1 sampai 3.";
        }
        
    } while (pilihan != 3);

    cout << "Terima kasih";
    return 0;
}
