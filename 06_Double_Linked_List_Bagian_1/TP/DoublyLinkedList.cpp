#include <iostream>
using namespace std;

// Struktur Node untuk Doubly Linked List
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Struktur Doubly Linked List
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Fungsi untuk menampilkan elemen dari depan ke belakang
    void displayForward() {
        Node* temp = head;
        cout << "DAFTAR ANGGOTA LIST: ";
        while (temp != nullptr) {
            cout << temp->data;
            temp = temp->next;
            if (temp != nullptr) cout << " <-> ";
        }
        cout << endl;
    }

    // Fungsi untuk menampilkan elemen dari belakang ke depan
    void displayBackward() {
        Node* temp = tail;
        cout << "Daftar elemen dari belakang ke depan: ";
        while (temp != nullptr) {
            cout << temp->data;
            temp = temp->prev;
            if (temp != nullptr) cout << " <-> ";
        }
        cout << endl;
    }

    // Fungsi untuk menambahkan elemen di awal list
    void insertFirst(int data) {
        Node* newNode = new Node{data, nullptr, head};
        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode; // Jika list kosong, head dan tail sama
        }
        head = newNode;
    }

    // Fungsi untuk menambahkan elemen di akhir list
    void insertLast(int data) {
        Node* newNode = new Node{data, tail, nullptr};
        if (tail != nullptr) {
            tail->next = newNode;
        } else {
            head = newNode; // Jika list kosong, head dan tail sama
        }
        tail = newNode;
    }

    // Fungsi untuk menghapus elemen pertama
    void deleteFirst() {
        if (head == nullptr) return; // List kosong
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr; // Jika hanya ada satu elemen
        }
        delete temp;
    }

    // Fungsi untuk menghapus elemen terakhir
    void deleteLast() {
        if (tail == nullptr) return; // List kosong
        Node* temp = tail;
        tail = tail->prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr; // Jika hanya ada satu elemen
        }
        delete temp;
    }
};
