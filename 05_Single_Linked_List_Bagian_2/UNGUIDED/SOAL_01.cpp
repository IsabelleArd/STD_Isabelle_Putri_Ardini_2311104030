#include <iostream>
#include <string>
using namespace std;

struct Node {
    int NIM ;
    string Nama;
    Node* next;
};

void addMahasiswa(Node** head_ref, int nim, const string& nama) {
    Node* new_node = new Node();
    new_node -> NIM = nim;
    new_node -> Nama = nama;
    new_node -> next = *head_ref;
    *head_ref = new_node;
    cout << "Mahasiswa dengan NIM " << nim << " dan Nama " << nama << " berhasil ditambahkan.\n";
}

void searchMahasiswa(Node* head, int nim) {
    Node* current = head;
    bool found = false;

    while (current != nullptr) {
        if (current -> NIM == nim) {
            cout << "NIM: " << current -> NIM << "\nNama: " << current -> Nama << endl;
            found = true;
            break;
        }
        current = current -> next;
    }

    if (!found) {
        cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
    }
}

void displayMahasiswa(Node* head) {
    Node* current = head;
    if (current == nullptr) {
        cout << "Tidak ada data mahasiswa." << endl;
        return;
    }

    cout << "Data mahasiswa dalam linked list:\n";
    while (current != nullptr) {
        cout << "NIM: " << current -> NIM << ", Nama: " << current -> Nama << endl;
        current = current -> next;
    }
}

int main() {
Node* head = nullptr;
    int choice, nim;
    string nama;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Cari Mahasiswa Berdasarkan NIM\n";
        cout << "3. Tampilkan Semua Data Mahasiswa\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan NIM: ";
                cin >> nim;
                cin.ignore();
                cout << "Masukkan Nama: ";
                getline(cin, nama);
                addMahasiswa(&head, nim, nama);
                break;

            case 2:
                cout << "Masukkan NIM yang ingin dicari: ";
                cin >> nim;
                searchMahasiswa(head, nim);
                break;

            case 3:
                displayMahasiswa(head);
                break;

            case 4:
                cout << "Keluar dari program.\n";
                break;

            default:
                cout << "Opsi tidak valid. Silakan coba lagi.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}