#include <iostream>
#include <string>
using namespace std;

class AkunBank {
private:
    string nomorRekening;
    double saldo;
    string namaPemilik;

public:
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
        cout << "Nama Pemilik: " << namaPemilik << endl;
        cout << "Nomor Rekening: " << nomorRekening << endl;
        cout << "Saldo: Rp " << saldo << endl;
    }
};

int main() {
    AkunBank akun1;

    akun1.setNomorRekening("123-456-789");
    akun1.setSaldo(5000000.0);
    akun1.setNamaPemilik("Ahnaf Fawwaz");

    akun1.tampilkanInfo();

    return 0;
}
