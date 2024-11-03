#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(string kalimat) {
    stack<char> S;
    
    // Memasukkan setiap karakter kalimat ke dalam stack
    for (char ch : kalimat) {
        S.push(ch);
    }
    
    // Mengambil karakter dari stack untuk membentuk kalimat terbalik
    string reversedKalimat = "";
    while (!S.empty()) {
        reversedKalimat += S.top();
        S.pop();
    }
    
    // Membandingkan kalimat asli dengan kalimat terbalik
    return kalimat == reversedKalimat;
}

int main() {
    string kalimat;
    cout << "Masukkan Kalimat: ";
    cin >> kalimat;

    // Mengecek apakah kalimat tersebut adalah palindrom
    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah bukan palindrom" << endl;
    }

    return 0;
}
