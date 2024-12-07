/*
Gunakan Multi Linked List untuk menyimpan data anggota perpustakaan dan daftar buku 
yang dipinjam.  - Setiap anggota memiliki data: Nama Anggota dan ID Anggota.  - Setiap buku memiliki data: Judul Buku dan Tanggal Pengembalian.  
Instruksi:  
1. Masukkan data anggota berikut:  - Anggota 1: Nama = "Rani", ID = "A001".  - Anggota 2: Nama = "Dito", ID = "A002".  - Anggota 3: Nama = "Vina", ID = "A003".  
2. Tambahkan buku yang dipinjam:  - Buku 1: Judul = "Pemrograman C++", Pengembalian = "01/12/2024" (Untuk Rani).  - Buku 2: Judul = "Algoritma Pemrograman", Pengembalian = "15/12/2024" (Untuk 
Dito).  
3. Tambahkan buku baru:  - Buku 3: Judul = "Struktur Data", Pengembalian = "10/12/2024" (Untuk Rani).  
4. Hapus anggota Dito beserta buku yang dipinjam.  
5. Tampilkan seluruh data anggota dan buku yang dipinjam. 
*/

#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string tanggal_pengembalian;
    Buku* next;
};

struct Anggota {
    string nama_anggota;
    string id_anggota;
    Buku* buku_head;
    Anggota* next;
};

class MultiLinkedList {
private:
    Anggota* head;

public:
    MultiLinkedList() : head(nullptr) {}

    void tambahAnggota(string nama, string id) {
        Anggota* new_anggota = new Anggota{nama, id, nullptr, head};
        head = new_anggota;
    }

    void tambahBuku(string id_anggota, string judul, string tanggal_pengembalian) {
        Anggota* anggota = head;
        while (anggota != nullptr && anggota->id_anggota != id_anggota) {
            anggota = anggota->next;
        }
        if (anggota != nullptr) {
            Buku* new_buku = new Buku{judul, tanggal_pengembalian, anggota->buku_head};
            anggota->buku_head = new_buku;
        }
    }

    void hapusAnggota(string id_anggota) {
        Anggota* prev_anggota = nullptr;
        Anggota* curr_anggota = head;
        while (curr_anggota != nullptr && curr_anggota->id_anggota != id_anggota) {
            prev_anggota = curr_anggota;
            curr_anggota = curr_anggota->next;
        }
        if (curr_anggota != nullptr) {
            if (prev_anggota == nullptr) {
                head = curr_anggota->next;
            } else {
                prev_anggota->next = curr_anggota->next;
            }
            Buku* buku = curr_anggota->buku_head;
            while (buku != nullptr) {
                Buku* temp = buku;
                buku = buku->next;
                delete temp;
            }
            delete curr_anggota;
        }
    }

    void tampilkanData() {
        Anggota* anggota = head;
        while (anggota != nullptr) {
            cout << "Nama Anggota: " << anggota->nama_anggota << ", ID: " << anggota->id_anggota << endl;
            Buku* buku = anggota->buku_head;
            while (buku != nullptr) {
                cout << "  Buku: " << buku->judul << ", Tanggal Pengembalian: " << buku->tanggal_pengembalian << endl;
                buku = buku->next;
            }
            anggota = anggota->next;
        }
    }
};

int main() {
    MultiLinkedList mll;

    // Masukkan data anggota
    mll.tambahAnggota("Rani", "A001");
    mll.tambahAnggota("Dito", "A002");
    mll.tambahAnggota("Vina", "A003");

    // Tambahkan buku yang dipinjam
    mll.tambahBuku("A001", "Pemrograman C++", "01/12/2024");
    mll.tambahBuku("A002", "Algoritma Pemrograman", "15/12/2024");

    // Tambahkan buku baru
    mll.tambahBuku("A001", "Struktur Data", "10/12/2024");

    // Hapus anggota Dito beserta buku yang dipinjam
    mll.hapusAnggota("A002");

    // Tampilkan seluruh data anggota dan buku yang dipinjam
    mll.tampilkanData();

    return 0;
}
