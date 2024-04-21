#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
protected:
    string status;
    string nama;
    int umur;
    string jurusan;
    string fakultas;

public:
    Mahasiswa() {}

    Mahasiswa(string status, string nama, int umur, string jurusan, string fakultas)
        : status(status), nama(nama), umur(umur), jurusan(jurusan), fakultas(fakultas) {}

    void inputData() {
        cout << " Masukkan Status : ";
        getline(cin, status);
        cout << " Masukkan Nama : ";
        cin.ignore(); 
        getline(cin, nama);
        cout << " Masukkan Umur : ";
        cin >> umur;
        cout << " Masukkan Jurusan : ";
        cin.ignore(); 
        getline(cin, jurusan);
        cout << " Masukkan Fakultas : ";
        getline(cin, fakultas);
    }

    void printData() {
        cout << " Status : " << status << endl;
        cout << " Nama : " << nama << endl;
        cout << " Usia : " << umur << endl;
        cout << " Jurusan : " << jurusan << endl;
        cout << " Fakultas : " << fakultas << endl;
    }
};

int main() {
    Mahasiswa mahasiswa[10];
    string status, nama, jurusan, fakultas;
    int umur;

    for (int i = 0; i < 5; ++i) {
        cout << "\n Data Mahasiswa ke-" << i+1 << endl << endl;
        mahasiswa[i].inputData();
    }

    cout << "\n Data Mahasiswa Setelah Di Input:" << endl;
    for (int i = 0; i < 5; ++i) {
        mahasiswa[i].printData();
        cout << endl;
    }

    return 0;
}
