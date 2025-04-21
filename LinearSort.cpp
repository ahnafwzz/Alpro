#include <iostream>
using namespace std;

void sentinelSearchAll(int arr[], int n, int x) {
    // Simpan elemen terakhir
    int last = arr[n - 1];

    // Set elemen terakhir sebagai sentinel
    arr[n - 1] = x;

    int i = 0;
    bool found = false;

    // Ulangi pencarian sampai elemen terakhir (sentinel)
    while (i < n - 1) {
        if (arr[i] == x) {
            cout << "Element found at index " << i << endl;
            found = true;
        }
        i++;
    }

    // Periksa elemen terakhir (asli) setelah di-restore
    arr[n - 1] = last;
    if (arr[n - 1] == x) {
        cout << "Element found at index " << (n - 1) << endl;
        found = true;
    }

    if (!found) {
        cout << "Element not found in the array" << endl;
    }
}

int main() {
    int arr[] = {3, 5, 2, 9, 7, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;

    sentinelSearchAll(arr, n, x);

    return 0;
}
