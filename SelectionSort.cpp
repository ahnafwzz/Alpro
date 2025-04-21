#include <iostream>
using namespace std;

// Fungsi untuk melakukan Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Indeks elemen terkecil
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Temukan indeks elemen terkecil
            }
        }
        // Tukar elemen terkecil dengan elemen pertama dari sisa array
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int n;

    // masukkan jumlah elemen
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n]; // Deklarasi array dengan ukuran n

    // masukkan elemen array
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Panggil fungsi Selection Sort
    selectionSort(arr, n);

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
