#include <iostream>
#include <string>
using namespace std;

int main() {

    // Original alphabet
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int shift;

    // Take shift as input
    cout << "Enter shift: ";
    cin >> shift;

    // Keep shift within 0-25
    shift = shift % 26;

    // Create shifted alphabet
    string shiftedAlphabet = "";

    for (int i = 0; i < 26; i++) {
        shiftedAlphabet += alphabet[(i + shift) % 26];
    }

    // Display alphabets
    cout << "\nOriginal Alphabet : " << alphabet << endl;
    cout << "Shifted Alphabet  : " << shiftedAlphabet << endl;

    // Take string to encrypt
    string input;
    cout << "\nEnter string to encrypt: ";
    cin >> input;

    // Encrypt the input
    string encrypted = "";

    for (char ch : input) {

        // Find character in original alphabet
        for (int i = 0; i < 26; i++) {

            if (ch == alphabet[i]) {
                // Replace with corresponding shifted character
                encrypted += shiftedAlphabet[i];
                break;
            }
        }
    }

    // Display encrypted string
    cout << "Encrypted String  : " << encrypted << endl;

    return 0;
}