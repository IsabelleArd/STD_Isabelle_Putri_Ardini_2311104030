#include <iostream>
#include "stack.cpp" // pastikan file stack.cpp sudah disertakan
using namespace std;

int main() {
    stack S;
    createStack(S);

    // Mengisi stack dengan huruf "I R I D A Y A C R E P" (urutan terbalik)
    char kata[] = {'I', 'R', 'I', 'D', 'A', 'Y', 'A', 'C', 'R', 'E', 'P'};
    for (int i = 0; i < 11; i++) {
        push(S, kata[i]);
    }

    // Menampilkan isi stack awal
    cout << "Isi stack awal: ";
    printInfo(S);

    // Mengeluarkan 7 elemen terakhir agar hanya tersisa "D I R I"
    for (int i = 0; i < 7; i++) {
        pop(S);
    }

    // Menampilkan isi stack setelah operasi pop
    cout << "Isi stack setelah pop: ";
    printInfo(S);

    return 0;
}
