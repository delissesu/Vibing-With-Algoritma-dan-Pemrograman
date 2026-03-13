#include <iostream>
#include <string>
using namespace std;

bool recursiveCrack(string guess, int length, string target) {
    if (length == 0) {
        return guess == target;
    }

    for (char c = 'a'; c <= 'z'; ++c) {
        if (recursiveCrack(guess + c, length - 1, target)) {
            cout << "Ketemu: " << guess + c << endl;
            return true;
        }
    }
    return false;
}

int main() {
    string target = "abc";
    recursiveCrack("", target.length(), target);
    return 0;
}