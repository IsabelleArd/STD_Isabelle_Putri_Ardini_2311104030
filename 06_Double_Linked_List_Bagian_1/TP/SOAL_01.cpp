#include "DoublyLinkedList.cpp"

int main() {
    DoublyLinkedList dll;

    int elemenPertama = 10;
    int elemenKedua = 5;
    int elemenKetiga = 20;

    // Tambah elemen pertama di list
    cout << "Input: Masukkan elemen pertama = " << elemenPertama << endl;
    dll.insertLast(elemenPertama);

    // Tambah elemen kedua di awal list
    cout << "Input: Masukkan elemen kedua di awal = " << elemenKedua << endl;
    dll.insertFirst(elemenKedua);

    // Tambah elemen ketiga di akhir list
    cout << "Input: Masukkan elemen ketiga di akhir = " << elemenKetiga << endl;
    dll.insertLast(elemenKetiga);

    // Tampilkan list dari depan ke belakang
    dll.displayForward();

    return 0;
}
