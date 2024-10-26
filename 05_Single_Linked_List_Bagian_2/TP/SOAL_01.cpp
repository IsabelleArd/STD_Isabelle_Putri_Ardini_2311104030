#include <iostream>
using namespace std;

// Struktur Node untuk Singly Linked List
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambah elemen baru di akhir list
void append(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = nullptr;

    if (*head_ref == nullptr) {
        *head_ref = new_node;
        return;
    }

    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = new_node;
}

// Fungsi untuk mencari elemen di dalam list
void searchElement(Node* head, int i) {
    Node* current = head;
    int position = 1;
    bool found = false;

    // Melakukan perulangan selama current tidak mencapai akhir list
    while (current != nullptr) {
        if (current->data == i) {
            found = true;
            cout << "Elemen ditemukan di alamat: " << current
                 << " dan berada di posisi ke-" << position << endl;
            break;
        }
        current = current->next;
        position++;
    }

    if (!found) {
        cout << "Elemen " << i << " tidak ada dalam list." << endl;
    }
}

int main() {
    Node* head = nullptr;
    int input;

    // Memasukkan 6 elemen integer ke dalam list
    cout << "Masukkan 6 elemen integer ke dalam list:" << endl;
    for (int j = 0; j < 6; j++) {
        cout << "Elemen ke-" << (j + 1) << ": ";
        cin >> input;
        append(&head, input);
    }

    // Meminta input untuk mencari elemen
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> input;

    // Panggil fungsi searchElement untuk mencari elemen dalam list
    searchElement(head, input);

    return 0;
}
