// Menyimpan data pegawai dan proyek yang dikelola setiap pegawai.
// Tiap pegawai memiliki data : Nama Pegawai dan ID Pegawai
// Setiap proyek memiliki data : Nama Proyek** dan **Durasi (bulan).

/*
1. Masukkan data pegawai berikut:  - Pegawai 1: Nama = "Andi", ID = "P001".  - Pegawai 2: Nama = "Budi", ID = "P002".  - Pegawai 3: Nama = "Citra", ID = "P003".  
2. Tambahkan proyek ke pegawai:  - Proyek 1: Nama = "Aplikasi Mobile", Durasi = 12 bulan (Untuk Andi).  - Proyek 2: Nama = "Sistem Akuntansi", Durasi = 8 bulan (Untuk Budi).  - Proyek 3: Nama = "E-commerce", Durasi = 10 bulan (Untuk Citra).  
3. Tambahkan proyek baru:  - Proyek 4: Nama = "Analisis Data", Durasi = 6 bulan (Untuk Andi).  
4. Hapus proyek "Aplikasi Mobile" dari Andi.  
5. Tampilkan data pegawai dan proyek mereka.
*/

#include <iostream>
#include <string>
using namespace std;

struct Proyek {
    string nama_proyek;
    int durasi;
    Proyek* next;
};

struct Pegawai {
    string nama_pegawai;
    string id_pegawai;
    Proyek* proyek_head;
    Pegawai* next;
};

class MultiLinkedList {
private:
    Pegawai* head;

public:
    MultiLinkedList() : head(nullptr) {}

    void tambahPegawai(string nama, string id) {
        Pegawai* new_pegawai = new Pegawai{nama, id, nullptr, head};
        head = new_pegawai;
    }

    void tambahProyek(string id_pegawai, string nama_proyek, int durasi) {
        Pegawai* pegawai = head;
        while (pegawai != nullptr && pegawai->id_pegawai != id_pegawai) {
            pegawai = pegawai->next;
        }
        if (pegawai != nullptr) {
            Proyek* new_proyek = new Proyek{nama_proyek, durasi, pegawai->proyek_head};
            pegawai->proyek_head = new_proyek;
        }
    }

    void hapusProyek(string id_pegawai, string nama_proyek) {
        Pegawai* pegawai = head;
        while (pegawai != nullptr && pegawai->id_pegawai != id_pegawai) {
            pegawai = pegawai->next;
        }
        if (pegawai != nullptr) {
            Proyek* prev_proyek = nullptr;
            Proyek* curr_proyek = pegawai->proyek_head;
            while (curr_proyek != nullptr && curr_proyek->nama_proyek != nama_proyek) {
                prev_proyek = curr_proyek;
                curr_proyek = curr_proyek->next;
            }
            if (curr_proyek != nullptr) {
                if (prev_proyek == nullptr) {
                    pegawai->proyek_head = curr_proyek->next;
                } else {
                    prev_proyek->next = curr_proyek->next;
                }
                delete curr_proyek;
            }
        }
    }

    void tampilkanData() {
        Pegawai* pegawai = head;
        while (pegawai != nullptr) {
            cout << "Nama Pegawai: " << pegawai->nama_pegawai << ", ID: " << pegawai->id_pegawai << endl;
            Proyek* proyek = pegawai->proyek_head;
            while (proyek != nullptr) {
                cout << "  Proyek: " << proyek->nama_proyek << ", Durasi: " << proyek->durasi << " bulan" << endl;
                proyek = proyek->next;
            }
            pegawai = pegawai->next;
        }
    }
};

int main() {
    MultiLinkedList mll;

    // Masukkan data pegawai
    mll.tambahPegawai("Andi", "P001");
    mll.tambahPegawai("Budi", "P002");
    mll.tambahPegawai("Citra", "P003");

    // Tambahkan proyek ke pegawai
    mll.tambahProyek("P001", "Aplikasi Mobile", 12);
    mll.tambahProyek("P002", "Sistem Akuntansi", 8);
    mll.tambahProyek("P003", "E-commerce", 10);

    // Tambahkan proyek baru
    mll.tambahProyek("P001", "Analisis Data", 6);

    // Hapus proyek "Aplikasi Mobile" dari Andi
    mll.hapusProyek("P001", "Aplikasi Mobile");

    // Tampilkan data pegawai dan proyek mereka
    mll.tampilkanData();

    return 0;
}
