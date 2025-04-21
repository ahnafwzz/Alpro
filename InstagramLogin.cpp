#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctUsername = "ahnaf";
    string correctPassword = "2025";
    string inputUsername, inputPassword;
    string newPassword;
    char lupa;
    bool loginBerhasil = false;

    cout << "=== Login Akun Instagram ===" << endl;

    do {
        cout << "\nMasukkan Username: ";
        cin >> inputUsername;
        cout << "Masukkan Password: ";
        cin >> inputPassword;

        if (inputUsername == correctUsername && inputPassword == correctPassword) {
            cout << "\nLogin berhasil! Akses akun diberikan.\n";
            loginBerhasil = true;
        } else {
            cout << "\nUsername atau Password salah.\n";
            cout << "Lupa password? (y/n): ";
            cin >> lupa;

            if (lupa == 'y' || lupa == 'Y') {
                cout << "Masukkan password baru: ";
                cin >> newPassword;
                correctPassword = newPassword;
                cout << "Password berhasil direset! Silakan login kembali.\n";
            }
        }
    } while (!loginBerhasil);

    cout << "\nProgram selesai.\n";
    return 0;
}
