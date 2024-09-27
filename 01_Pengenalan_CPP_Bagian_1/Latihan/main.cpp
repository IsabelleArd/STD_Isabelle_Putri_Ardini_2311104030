//1. Input/Ouput
/*#include <iostream>

using namespace std;

int main(){
    string nama, nim;
    cout << "Siapa nama anda? ";
    cin >> nama;
    cout << "Berapa NIM anda? ";
    cin >> nim;
    cout << "Nama saya: " << nama << endl;
    cout << "NIM saya: " << nim << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main(){
    string namaLengkap;
    string nim;

    cout << "Siapa nama anda?";
    getline(cin, namaLengkap);
    cout << "Berapa NIM anda?";
    getline(cin, nim);

    cout << "\nNama saya: " << namaLengkap << endl;
    cout << "NIM saya: " << nim << endl;
    return 0;
}*/

//2. Aritmatika
/*#include <iostream>

using namespace std;

int main() {
    int bil1 = 3, bil2 = 4, hasil1;
    float bil3 = 3.0, bil4 = 4.0, hasil2;
    hasil1 = bil1 + bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 - bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 * bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 / bil2;
    cout << hasil1 << endl;
    hasil1 = bil2 / bil1;
    cout << hasil1 << endl;
    hasil1 = bil1 % bil2;
    cout << hasil1 << endl;
    hasil1 = bil2 % bil1;
    cout << hasil1 << endl;
    hasil2 = bil3 / bil4;
    cout << hasil2 << endl;
    return 0;
}*/

//3. Perbandingan
/*#include <iostream>

using namespace std;

int main(){
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 > bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2;
    cout << hasil << endl;
    hasil = bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 <= bil2;
    cout << hasil << endl;
    hasil = bil1 == bil2;
    cout << hasil << endl;
    hasil = bil1 != bil2;
    cout << hasil << endl;
    return 0;
}*/

//4. Logika
/*#include <iostream>

using namespace std;

int main() {
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 <= bil2 and bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2 or bil1 < bil2;
    cout << hasil << endl;
    hasil = not(bil1 >= bil2) or bil1 < bil2;
    cout << hasil << endl;
    return 0;
}*/

//5. If-else
/*#include <iostream>

using namespace std;

int main() {
    int nilai;
    cin >> nilai;
    if (nilai > 86) {
        cout << "A" << endl;
    } else {
        cout << "Bukan A" << endl;
    }
    return 0;
}*/

//6. For-to-do
/*#include <iostream>

using namespace std;

int main() {
    int a, b, bilangan;
    cout << "Masukkan batas bawah: ";
    cin >> a;
    cout << "Masukkan batas atas: ";
    cin >> b;
    for (bilangan = a; bilangan <= b; bilangan++) {
        cout << "Bilangan" << bilangan << endl;
    }
    return 0;
}*/

//7. While-do
/*#include <iostream>

using namespace std;

int main() {
    int bilangan, asli, jumlah;

    cout << "Masukkan bilangan asli: ";
    cin >> asli;

    bilangan = 1;
    jumlah = 0;
    while (bilangan <= asli) {
        if (bilangan % 2 == 0) {
            jumlah += bilangan;
        }
        bilangan++;
    }
    cout << "Jumlah bilangan genap: " << jumlah << endl;
    return 0;
}*/


//Latihan 3 soal
//1.
/*#include <iostream>

using namespace std;

int main() {
    float bil1, bil2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    cout << "Hasil penjumlahan: " << bil1 + bil2 << endl;
    cout << "Hasil pengurangan: " << bil1 - bil2 << endl;
    cout << "Hasil perkalian: " << bil1 * bil2 << endl;

    if (bil2 != 0) {
        cout << "Hasil pembagian: " << bil1 / bil2 << endl;
    } else {
        cout << "Tidak ada jawaban!" << endl;
    }
    return 0;
}*/

//2.
/*#include <iostream>

using namespace std;

string satu_an(int n) {
    switch (n) {
        case 0: return "nol";
        case 1: return "satu";
        case 2: return "dua";
        case 3: return "tiga";
        case 4: return "empat";
        case 5: return "lima";
        case 6: return "enam";
        case 7: return "tujuh";
        case 8: return "delapan";
        case 9: return "sembilan";
        default: return "";
    }
}

string belas(int n) {
    switch (n) {
        case 10: return "sepuluh";
        case 11: return "sebelas";
        case 12: return "dua belas";
        case 13: return "tiga belas";
        case 14: return "empat belas";
        case 15: return "lima belas";
        case 16: return "enam belas";
        case 17: return "tujuh belas";
        case 18: return "delapan belas";
        case 19: return "sembilan belas";
        default: return "";
    }
}

string puluh(int n) {
    switch (n) {
        case 2: return "dua puluh";
        case 3: return "tiga puluh";
        case 4: return "empat puluh";
        case 5: return "lima puluh";
        case 6: return "enam puluh";
        case 7: return "tujuh puluh";
        case 8: return "delapan puluh";
        case 9: return "sembilan puluh";
        default: return "";
    }
}

string angkaTulis(int n) {
    if (n < 10) {
        return satu_an(n);
    } else if (n < 20) {
        return belas(n);
    } else {
        int puluhan = n / 10;
        int satuan = n % 10;

        if (satu_an == 0) {
            return puluh(puluhan);
        } else {
            return puluh(puluhan) + " " + satu_an(satuan);
        }
    }
}

int main() {
    int angka;

    cout << "Masukkan angka (0-99): ";
    cin >> angka;
    if (angka < 0 || angka > 100) {
        cout << "Input tidak valid!" << endl;
    } else {
        cout << angka << ": " << angkaTulis(angka) << endl;
    }

    return 0;
}*/

//3.
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    for (int P = n; P >= 1; P--) {
        for (int s = P; s >= 1; s--) {
            cout << s << " ";
        }
        cout << "* ";
        for (int s = 1; s <= P; s++) {
            cout << s << " ";
        }
        cout << endl;
    }
    cout << "*" << endl;
    return 0;
}
