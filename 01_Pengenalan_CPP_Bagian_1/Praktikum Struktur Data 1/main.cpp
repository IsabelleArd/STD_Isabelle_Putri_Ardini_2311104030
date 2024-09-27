/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Saya lagi belajar c++ nih!" << endl;
    return 0;
}*/


/*
#include <iostream>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    cout << "nilai = " << inp;
    return 0;
}*/


/*Kalo double-nya diganti int, hasilnya jadi 2.*/
/*Kalo pake double hasilnya 2.5.*/
/*
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    double W, X, Y; float Z;
    X = 7; Y = 3; W = 1;
    Z = (X + Y)/(Y +W);
    cout << "Nilai z = " << Z << endl;
    return 0;
}*/


/*Contoh penggunaan if...else*/
/*#include <iostream>
using namespace std;
int main()
{
    double tot_pembelian, diskon;
    cout << "Total pembelian: Rp ";
    cin >> tot_pembelian;
    diskon = 0;
    if (tot_pembelian >= 100000)
        diskon = 0.05*tot_pembelian;
    else
        diskon = 0;
    cout << "Besar diskon = Rp " << diskon;
}*/


/*Contoh do-while*/
/*#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i = 1;
    int jum;
    cin >> jum;
    do {
        cout << "Baris ke-" << i+1 << endl;
        i++;
    }while (i<jum);
    getch();
    return 0;
}*/

/*Tugas StrukDat 1*/
/*#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int* ptr = &x;
    *ptr = 7;
    cout << "Value of num: " << x << endl;
    return 0;
}*/



/*Soal 7/8 & 3*/


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
#include <iostream>

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
}

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
