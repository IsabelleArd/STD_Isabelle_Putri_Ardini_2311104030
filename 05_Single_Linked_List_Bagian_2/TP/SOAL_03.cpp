#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambah elemen baru di akhir list
void append(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = nullptr;

    if (*head_ref == nullptr) {
        *head_ref = new_node;
        return;
    }

    Node* last = *head_ref;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = new_node;
}

// Procedure untuk menambahkan elemen secara terurut ke dalam list
void insertSorted(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = nullptr;

    // Jika list kosong atau elemen baru lebih kecil dari elemen head
    if (*head_ref == nullptr || (*head_ref)->data >= new_data) {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    // Temukan posisi yang sesuai untuk elemen baru
    Node* current = *head_ref;
    while (current->next != nullptr && current->next->data < new_data) {
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;
}

// Fungsi untuk mencetak list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int input;

    // Memasukkan 4 elemen integer ke dalam list
    cout << "Masukkan 4 elemen integer secara terurut ke dalam list:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Elemen ke-" << (i + 1) << ": ";
        cin >> input;
        insertSorted(&head, input);
    }

    cout << "\nList setelah memasukkan 4 elemen: ";
    printList(head);

    // Meminta pengguna memasukkan elemen tambahan untuk disisipkan
    cout << "Masukkan elemen tambahan yang akan disisipkan secara terurut: ";
    cin >> input;

    // Menyisipkan elemen baru secara terurut
    insertSorted(&head, input);

    cout << "List setelah menambahkan elemen baru: ";
    printList(head);

    return 0;
}
