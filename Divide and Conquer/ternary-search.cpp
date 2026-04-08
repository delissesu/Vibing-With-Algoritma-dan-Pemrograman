#include <bits\stdc++.h>
using namespace std;

int ternarySearch(int arr[], int target, int left, int right) {
    
    while (left <= right) {
        int palingKiri = left + (right - left) / 3;
        int palingKanan = right - (right - left) / 3;

        if (arr[palingKanan] == target) {
            return palingKanan;
        }

        if (arr[palingKiri] == target) {
            return palingKiri;
        }

        if (target < arr[palingKiri]) {
            right = palingKiri - 1;
        } else if (target > arr[palingKanan]) {
            left = palingKanan + 1;
        } else {
            right = palingKanan - 1;
            left = palingKiri + 1;
        }
    } 

    return -1;
}

int ternarySearchAlgorithm(int arr[], int target, int size) {
    return ternarySearch(arr, target, 0, size - 1);
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;
    int ukuranArray = sizeof(arr);
    
    int result = ternarySearchAlgorithm(arr, target, ukuranArray);

    cout << result << endl;
}