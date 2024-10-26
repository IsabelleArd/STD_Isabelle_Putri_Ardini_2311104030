#include "DoublyLinkedList.cpp"

int main() {
    DoublyLinkedList dll;

    // Tambah elemen-elemen ke list
    cout << "Input: Masukkan elemen pertama = 10" << endl;
    dll.insertLast(10);

    cout << "Input: Masukkan elemen kedua di akhir = 15" << endl;
    dll.insertLast(15);

    cout << "Input: Masukkan elemen ketiga di akhir = 20" << endl;
    dll.insertLast(20);

    // Hapus elemen pertama
    cout << "Hapus elemen pertama." << endl;
    dll.deleteFirst();

    // Hapus elemen terakhir
    cout << "Hapus elemen terakhir." << endl;
    dll.deleteLast();

    // Tampilkan list setelah penghapusan
    dll.displayForward();

    return 0;
}
