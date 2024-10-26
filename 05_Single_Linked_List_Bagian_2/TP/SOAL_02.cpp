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

// Procedure untuk mengurutkan elemen-elemen dalam list menggunakan Bubble Sort
void bubbleSortList(Node* head) {
    bool swapped;
    Node* current;
    Node* last = nullptr;

    // Ulangi proses sorting sampai tidak ada pertukaran
    do {
        swapped = false;
        current = head;

        while (current->next != last) {
            if (current->data > current->next->data) {
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
        last = current; // Setelah iterasi, elemen terbesar akan berada di akhir list
    } while (swapped);
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

    // Memasukkan 5 elemen integer ke dalam list
    cout << "Masukkan 5 elemen integer ke dalam list:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemen ke-" << (i + 1) << ": ";
        cin >> input;
        append(&head, input);
    }

    cout << "\nList sebelum diurutkan: ";
    printList(head);

    // Mengurutkan list menggunakan Bubble Sort
    bubbleSortList(head);

    cout << "List setelah diurutkan: ";
    printList(head);

    return 0;
}
