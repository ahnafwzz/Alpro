#include <iostream>
#include <string>
using namespace std;

// Kelas AkunBank
class AkunBank {
private:
    string nomorRekening;
    double saldo;
    string namaPemilik;

public:
    AkunBank(string nomor, double sal, string nama) {
        nomorRekening = nomor;
        saldo = sal;
        namaPemilik = nama;
    }

    void setNomorRekening(string nomor) {
        nomorRekening = nomor;
    }

    void setSaldo(double sal) {
        saldo = sal;
    }

    void setNamaPemilik(string nama) {
        namaPemilik = nama;
    }

    void tampilkanInfo() {
        cout << "Informasi Akun Bank:" << endl;
        cout << "Nama Pemilik: " << namaPemilik << endl;
        cout << "Nomor Rekening: " << nomorRekening << endl;
        cout << "Saldo: Rp " << saldo << endl;
    }
};

int main() {
    AkunBank akun1("123-456-789", 5000000.0, "Ahnaf Fawwaz");

    // Menampilkan informasi akun
    akun1.tampilkanInfo();

//-------------------------------------------------------------------//
    // Mengubah data akun menggunakan setter
    akun1.setNamaPemilik("Arjanta");
    akun1.setNomorRekening("987-654-321");
    akun1.setSaldo(10000000.0);

    cout << "\nSetelah perubahan:" << endl;
    akun1.tampilkanInfo();

    return 0;
}
