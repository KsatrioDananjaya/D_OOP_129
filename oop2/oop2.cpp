#include <iostream>
using namespace std;

class Mahasiswa {
public:
    int nim;
    string nama;
    void tampil() {
        cout << "\nNIM = " << nim;
        cout << "\nNama = " << nama << endl;
    }
};

class Matkul {
private:
    int sks;
    string kode;
    string namamk;
public:
    void inputmk() {
        cout << "Masukkan SKS: ";
        cin >> sks;
        cout << "Masukkan Kode: ";
        cin >> kode;
        cout << "Masukkan Nama Mata kuliah: ";
        cin >> namamk;
    }
    void tampilmk() {
        cout << "\nSKS Mata Kuliah = " << sks;
        cout << "\nKode Mata Kuliah = " << kode;
        cout << "\nNama Mata Kuliah = " << namamk << endl;
    }
};

int main()
{
   
}


