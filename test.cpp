#include<iostream>

using namespace std;

const string namaDev = "Afriza Ahmad Muqoffa";

struct Barang{
    int kode;
    string nama;
};

void menu(){
    cout<<"Menu :\n1. Input barang\n2. Tampilkan barang\n3. Keluar\nPilih: ";
}

int main()
{
    int n=99999;
    Barang listBarang[n];
    int pilihan;
    int jumlahBarang = 0;
    
    do{
        menu();
        if(cin>>pilihan){
            if(pilihan == 1){
                int kodeBarang;
                string namaBarang;
                
                cout<<"Masukkan kode barang : (hanya masukkan angka!)"<<endl;
                while(!(cin>>kodeBarang)){
                    cin.clear();
                    cin.ignore();
                    cout<<"Masukkan kode barang hanya dengan bilangan bulat!"<<endl;
                    cout<<"Masukkan kode barang : (hanya masukkan angka!)"<<endl;
                }
                cout<<"Masukkan nama barang : "<<endl;
                cin.ignore();
                getline(cin, namaBarang);
                
                if(jumlahBarang < n){
                listBarang[jumlahBarang].kode = kodeBarang;
                listBarang[jumlahBarang].nama = namaBarang;
                jumlahBarang+=1;
                cout<<"\nKode["<<kodeBarang<<"], Nama["<<namaBarang<<"] berhasil ditambahkan!"<<endl;
                }else{
                    cout<<"\nPenyimpanan anda sudah mencapai batas!"<<endl;
                }
                
            }else if(pilihan == 2){
                if(jumlahBarang > 0){
                    cout<<"\nDaftar barang:\n";
                    for(int i = 0; i < jumlahBarang; i++){
                        cout<<i+1<<". Kode: "<<listBarang[i].kode<<", Nama: "<<listBarang[i].nama<<endl;
                    }
                }else{
                    cout<<"\nBelum ada barang yang ditambahkan!"<<endl;
                }
            }else if(pilihan != 3){
                cout<<"\n\nInput tidak valid!\nMasukkan angka 1-3"<<endl;
            }
        }else{
            cin.clear();
            cin.ignore();
            cout<<"\n\nInput tidak valid!\nMasukkan angka 1-3"<<endl;    
        }
        
    }while(pilihan != 3);
    cout<<"Terima kasih!\n\n© 2023 "<<namaDev<<".";
    return 0;
}
