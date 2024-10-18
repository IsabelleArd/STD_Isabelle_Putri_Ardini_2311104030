#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct List {
    Node* head;
};

void createList(List &L) {
    L.head = NULL;
}

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

void insertFront(List &L, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = L.head;
    L.head = newNode;
}

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

// Fungsi untuk menghapus node dengan nilai tertentu
void deleteNode(List &L, int value) {
    Node* temp = L.head;
    Node* prev = NULL;

    // Jika node pertama adalah yang akan dihapus
    if (temp != NULL && temp->data == value) {
        L.head = temp->next;
        delete temp;
        return;
    }

    // Mencari node yang akan dihapus
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // Jika tidak ditemukan
    if (temp == NULL) return;

    // Hapus node
    prev->next = temp->next;
    delete temp;
}

int main() {
    List L;
    createList(L);

    // Insert data
    insertFront(L, 10);  // Tambah node di depan (nilai: 10)
    insertBack(L, 20);   // Tambah node di belakang (nilai: 20)
    insertFront(L, 5);   // Tambah node di depan (nilai: 5)

    // Hapus node dengan nilai 10
    deleteNode(L, 10);

    // Cetak isi linked list setelah penghapusan
    cout << "Isi Linked List setelah penghapusan: ";
    printList(L);  // Output: 5 -> 20

    return 0;
}
