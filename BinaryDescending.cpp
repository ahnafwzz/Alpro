#include <iostream>
using namespace std;

int binarySearchDescending(int arr[], int l, int r, int x) {
   while(l <= r) {
      int mid = l + (r - l) / 2;

      if(arr[mid] == x) {
         cout << "Elemen ditemukan di indeks " << mid << endl;
         return mid;
      }
      // Untuk array descending, pembanding dibalik
      else if(arr[mid] > x) {
         cout << "Cek ke sebelah kanan (lebih kecil dari mid)" << endl;
         l = mid + 1;
      }
      else {
         cout << "Cek ke sebelah kiri (lebih besar dari mid)" << endl;
         r = mid - 1;
      }
   }
   return -1;
}

int main() {
   int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; // Array descending
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 7;

   int result = binarySearchDescending(arr, 0, n - 1, x);
   if(result == -1) {
      cout << "Elemen tidak ditemukan dalam array" << endl;
   }

   return 0;
}
