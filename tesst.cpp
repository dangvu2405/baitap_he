#include <iostream>
#include <bitset>  // Ð? s? d?ng bitset cho vi?c in bit

using namespace std;

void displayBit(int n) {
    // In ra bi?u di?n bit c?a s? n
    cout << bitset<8>(n) << endl;  // S? d?ng 8 bit ð? in
}

void displayHex(int n) {
    // In ra bi?u di?n hexa c?a s? n
    cout << hex << n << endl;
}

int main() {
    // 1a. Bi?u di?n bit c?a s? 43
    cout << "Bi?u di?n bit c?a 43: ";
    displayBit(43);
    
    // 1b. Bi?u di?n bit c?a các s? 7, 15, 31, 63, 127, 255
    cout << "Bi?u di?n bit c?a 7: ";
    displayBit(7);
    cout << "Bi?u di?n bit c?a 15: ";
    displayBit(15);
    cout << "Bi?u di?n bit c?a 31: ";
    displayBit(31);
    cout << "Bi?u di?n bit c?a 63: ";
    displayBit(63);
    cout << "Bi?u di?n bit c?a 127: ";
    displayBit(127);
    cout << "Bi?u di?n bit c?a 255: ";
    displayBit(255);
    
    // 1c. Bi?u di?n hexa c?a s? 43
    cout << "Bi?u di?n hexa c?a 43: ";
    displayHex(43);
    
    // 1d. Bi?u di?n hexa c?a các s? 7, 15, 31, 63, 127, 255
    cout << "Bi?u di?n hexa c?a 7: ";
    displayHex(7);
    cout << "Bi?u di?n hexa c?a 15: ";
    displayHex(15);
    cout << "Bi?u di?n hexa c?a 31: ";
    displayHex(31);
    cout << "Bi?u di?n hexa c?a 63: ";
    displayHex(63);
    cout << "Bi?u di?n hexa c?a 127: ";
    displayHex(127);
    cout << "Bi?u di?n hexa c?a 255: ";
    displayHex(255);

    // 1e. Tính toán bitwise: AND, OR, XOR
    cout << "Tính toán bitwise:" << endl;
    cout << "43 & 17 = " << (43 & 17) << endl;
    cout << "43 | 17 = " << (43 | 17) << endl;
    cout << "43 ^ 17 = " << (43 ^ 17) << endl;

    return 0;
}

