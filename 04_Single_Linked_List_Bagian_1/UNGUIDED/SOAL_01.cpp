#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct List {
    Node* head;
};

// Fungsi untuk membuat list baru
void createList(List &L) {
    L.head = NULL;
}

// Fungsi untuk mencetak linked list
void printList(List L) {
    Node* temp = L.head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

// Fungsi untuk menambah node di depan
void insertFront(List &L, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = L.head;
    L.head = newNode;
}

// Fungsi untuk menambah node di belakang
void insertBack(List &L, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    
    if (L.head == NULL) {
        L.head = newNode;
    } else {
        Node* temp = L.head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main() {
    List L;
    createList(L);

    // Insert data
    insertFront(L, 10);  // Tambah node di depan (nilai: 10)
    insertBack(L, 20);   // Tambah node di belakang (nilai: 20)
    insertFront(L, 5);   // Tambah node di depan (nilai: 5)

    // Cetak isi linked list
    cout << "Isi Linked List: ";
    printList(L);  // Output: 5 -> 10 -> 20

    return 0;
}
