#include <iostream>
#include <string>

using namespace std;

// Struktur Node untuk menyimpan data buku
struct Node {
    int id;
    string title;
    string author;
    Node* next;
    Node* prev;
};

// Struktur List untuk mengelola Double Linked List
struct BookList {
    Node* head;
    Node* tail;

    // Konstruktor untuk menginisialisasi head dan tail
    BookList() {
        head = nullptr;
        tail = nullptr;
    }

    // Fungsi untuk menambahkan buku di akhir linked list
    void addBook(int id, string title, string author) {
        Node* newNode = new Node;
        newNode->id = id;
        newNode->title = title;
        newNode->author = author;
        newNode->next = nullptr;
        newNode->prev = tail;

        if (tail != nullptr) {
            tail->next = newNode;
        } else {
            head = newNode;
        }
        tail = newNode;

        cout << "Buku \"" << title << "\" telah ditambahkan.\n";
    }

    // Fungsi untuk menampilkan semua buku dari awal ke akhir
    void displayFromStart() {
        Node* current = head;
        if (current == nullptr) {
            cout << "Daftar buku kosong.\n";
            return;
        }
        cout << "Daftar Buku (dari awal ke akhir):\n";
        while (current != nullptr) {
            cout << "ID: " << current->id << ", Judul: " << current->title << ", Penulis: " << current->author << endl;
            current = current->next;
        }
    }

    // Fungsi untuk menampilkan semua buku dari akhir ke awal
    void displayFromEnd() {
        Node* current = tail;
        if (current == nullptr) {
            cout << "Daftar buku kosong.\n";
            return;
        }
        cout << "Daftar Buku (dari akhir ke awal):\n";
        while (current != nullptr) {
            cout << "ID: " << current->id << ", Judul: " << current->title << ", Penulis: " << current->author << endl;
            current = current->prev;
        }
    }

    // Destructor untuk membersihkan memory
    ~BookList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    BookList list;
    int choice, id;
    string title, author;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Buku\n";
        cout << "2. Tampilkan Buku dari Awal ke Akhir\n";
        cout << "3. Tampilkan Buku dari Akhir ke Awal\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan ID Buku: ";
                cin >> id;
                cin.ignore(); // Membersihkan newline dari buffer
                cout << "Masukkan Judul Buku: ";
                getline(cin, title);
                cout << "Masukkan Penulis Buku: ";
                getline(cin, author);
                list.addBook(id, title, author);
                break;
            case 2:
                list.displayFromStart();
                break;
            case 3:
                list.displayFromEnd();
                break;
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Opsi tidak valid, coba lagi.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
