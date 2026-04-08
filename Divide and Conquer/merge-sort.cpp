#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menggabungkan dua bagian array (vector)
// Bagian pertama: arr[left..mid]
// Bagian kedua: arr[mid+1..right]
void merge(vector<int>& arr, int left, int mid, int right){
                         
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Membuat vector sementara untuk menampung data kiri dan kanan
    vector<int> L(n1), R(n2);

    // Menyalin data dari arr ke vector sementara L dan R
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    // Menggabungkan kembali L dan R ke arr secara terurut
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            cout<<L[i]<<" lebih kecil dari "<<R[j]<<endl;
            i++;
        }
        else {
            arr[k] = R[j];
            cout<<R[j]<<" lebih kecil dari "<<L[i]<<endl;
            j++;
        }
        k++;
    }

    // Jika masih ada sisa elemen di L, salin ke arr
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Jika masih ada sisa elemen di R, salin ke arr
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right){
    
    cout<<"merge sort"<<endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    if (left >= right)
        return;

    // Menentukan titik tengah
    int mid = left + (right - left) / 2;
    cout<<mid;

    // Urutkan bagian kiri
    mergeSort(arr, left, mid);

    // Urutkan bagian kanan
    mergeSort(arr, mid + 1, right);

    // Gabungkan hasil keduanya
    merge(arr, left, mid, right);
}

int main(){
    vector<int> arr = {5, 3, 8, 4};
    int n = arr.size();

    mergeSort(arr, 0, n-1);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

}