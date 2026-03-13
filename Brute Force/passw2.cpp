#include <iostream>
#include <string>
using namespace std;

int main() {
    string target = "cat";
    int panjang = target.length();
    string guess = "    ";
    int idx = 0;
    int hitung = 0;

    while (panjang > 0){
        for (char i = 'a'; i <= 'z'; i++){
            if (target[idx]==i){
                guess+=i;
                cout<<"Ketemu : "<<guess<<endl;
                idx++;
                panjang--;
                break;
            }
            hitung++;
        }
    }
}