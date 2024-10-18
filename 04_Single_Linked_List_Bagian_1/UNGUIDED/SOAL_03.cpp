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

// Fungsi untuk mencari node dengan nilai tertentu
bool searchNode(List L, int value) {
    Node* temp = L.head;
    while (temp != NULL) {
        if (temp->data == value) {
            return true;  // Ditemukan
        }
        temp = temp->next;
    }
    return false;  // Tidak ditemukan
}

// Fungsi untuk menghitung panjang linked list
int listLength(List L) {
    Node* temp = L.head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    List L;
    createList(L);

    // Insert data
    insertFront(L, 10);  // Tambah node di depan (nilai: 10)
    insertBack(L, 20);   // Tambah node di belakang (nilai: 20)
    insertFront(L, 5);   // Tambah node di depan (nilai: 5)

    // Cari node dengan nilai 20
    if (searchNode(L, 20)) {
        cout << "Node dengan nilai 20 ditemukan." << endl;
    } else {
        cout << "Node dengan nilai 20 tidak ditemukan." << endl;
    }

    // Hitung panjang linked list
    int length = listLength(L);
    cout << "Panjang linked list: " << length << endl;  // Output: Panjang linked list: 3

    return 0;
}
