#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int shift;

    cout << "Enter shift: ";
    cin >> shift;

    shift = shift % 26;

    string shiftedAlphabet = "";

    for (int i = 0; i < 26; i++) {
        shiftedAlphabet += alphabet[(i + shift) % 26];
    }

    cout << "\nOriginal Alphabet : " << alphabet << endl;
    cout << "Shifted Alphabet  : " << shiftedAlphabet << endl;

    string input;
    cout << "\nEnter string to encrypt: ";
    cin.ignore();
    getline(cin, input);

    string encrypted = "";

    for (char ch : input) {
        if (isalpha(ch)) {
            ch = toupper(ch);

            int i = ch - 'A';
            encrypted += shiftedAlphabet[i];
        }
        else {
            encrypted += ch;
        }
    }

    cout << "Encrypted String  : " << encrypted << endl;

    return 0;
}