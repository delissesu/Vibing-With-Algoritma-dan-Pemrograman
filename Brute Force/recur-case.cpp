#include <iostream>
#include <string>
using namespace std;

bool recursiveCrack(string guess, int length, string target) {
    cout << "Track guess='" << guess << "', length=" << length << endl;
    if (length == 0) {
        cout << "Cek guess: '" << guess << "' dengan target: '" << target << "'\n";
        return guess == target;
    }

    for (char c = 'a'; c <= 'z'; ++c) {
        cout << "Loop: guess='" << guess << "', tambah='" << c << "'\n";
        if (recursiveCrack(guess + c, length - 1, target)) {
            cout << "Ketemu: " << guess + c << endl;
            return true;
        }
    }
    return false;
}

int main() {
    string target1 = "abc";
    cout << "TC1 target='" << target1 << "'\n";
    recursiveCrack("", target1.length(), target1);

    string target2 = "zzz";
    cout << "TC 2: target='" << target2 << "'\n";
    recursiveCrack("", target2.length(), target2);

    string target3 = "a";
    cout << "TC 3: target='" << target3 << "'\n";
    recursiveCrack("", target3.length(), target3);

    string target4 = "";
    cout << "TC4 4: target='" << target4 << "' (string kosong)\n";
    recursiveCrack("", target4.length(), target4);

    return 0;
}