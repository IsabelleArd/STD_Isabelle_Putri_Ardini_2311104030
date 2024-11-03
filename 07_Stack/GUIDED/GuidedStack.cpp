#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0; // 5 buat set default banyak data

bool isFull() {
    return top == maksimal; // CeK array penuh atau tidak
}

bool isEmpty() {
    return top == 0;
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh." << endl;
    } else {
        arrayBuku[top] = data;
        top++; // Notasi supaya data bertambah terus sampai atas
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus." << endl;
    } else {
        arrayBuku[top - 1] = ""; // Menghapus elemen teratas
        top--; // Mundur sampai menemukan elemen yang akan dihapus
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada yang bisa dilihat." << endl;
    } else {
        int index = top - posisi; // Data teratas dikurangi sampai data ditemukan
        if (index >= 0 && index < top) {
            cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
        } else {
            cout << "Posisi di luar jangkauan." << endl;
        }
    }
}

int countStack() { // Mengitung data sampai ke posisi teratas
    return top;
}

void changeArrayBuku(int posisi, string data) {
    int index = top - posisi;
    if (index >= 0 && index < top) {
        arrayBuku[index] = data;
    } else {
        cout << "Posisi melebihi data yang ada." << endl; // Melebihi stack
    }
}

void destroyArrayBuku() {
    for (int i = top - 1; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak." << endl;
    } else {
        for (int i = top -1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n" << endl;

    cout << "Apakah data stack penuh? " << (isFull() ? "Ya" : "Tidak") << endl; // ? digunakan program untuk menentukan kosong atau tidaknya array
    cout << "Apakah data stack kosong? " << (isEmpty() ? "Ya" : "Tidak") << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();
    cout << "\n" << endl; // \n artinya per baris, jadi outputnya berupa baris

    destroyArrayBuku();
    cout << "Top setelah destroy: " << top << endl;
    cetakArrayBuku();

    return 0;
}