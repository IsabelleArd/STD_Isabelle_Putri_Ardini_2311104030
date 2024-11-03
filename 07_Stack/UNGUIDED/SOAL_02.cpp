#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseStringUsingStack(string kalimat) {
    stack<char> S;
    
    for (char ch : kalimat) {
        S.push(ch);
    }
    
    string reversedKalimat = "";
    while (!S.empty()) {
        reversedKalimat += S.top();
        S.pop();
    }
    
    return reversedKalimat;
}

int main() {
    string kalimat;
    cout << "Masukkan kata (minimal 3 kata): ";
    getline(cin, kalimat);

    string hasil = reverseStringUsingStack(kalimat);

    for (char ch : hasil) {
        cout << ch << " ";
    }
    cout << endl;
    
    cout << "Hasil : " << hasil << endl;

    return 0;
}
