#include "DoublyLinkedList.cpp"

int main() {
    DoublyLinkedList dll;

    // Tambah 4 elemen ke list
    cout << "Input: Masukkan 4 elemen secara berurutan: 1, 2, 3, 4" << endl;
    dll.insertLast(1);
    dll.insertLast(2);
    dll.insertLast(3);
    dll.insertLast(4);

    // Tampilkan dari depan ke belakang
    dll.displayForward();

    // Tampilkan dari belakang ke depan
    dll.displayBackward();

    return 0;
}
