#include <iostream>
#include <limits>
using namespace std;

// Struktur Pohon
struct Pohon {
    char data;
    Pohon *left, *right, *parent;
};

// Root Tree
Pohon *root;

// Inisialisasi Tree
void init() {
    root = NULL;
}

// Cek Tree Kosong
bool isEmpty() {
    return root == NULL;
}

// Membuat Node Baru
void buatNode(char data) {
    if (isEmpty()) {
        root = new Pohon{data, NULL, NULL, NULL};
        cout << "\nNode " << data << " berhasil dibuat menjadi root.\n";
    } else {
        cout << "\nPohon sudah dibuat.\n";
    }
}

// Menambah Node Kiri
Pohon *insertLeft(char data, Pohon *node) {
    if (node->left != NULL) {
        cout << "\nNode " << node->data << " sudah ada child kiri.\n";
        return NULL;
    }
    Pohon *baru = new Pohon{data, NULL, NULL, node};
    node->left = baru;
    cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data << ".\n";
    return baru;
}

// Menambah Node Kanan
Pohon *insertRight(char data, Pohon *node) {
    if (node->right != NULL) {
        cout << "\nNode " << node->data << " sudah ada child kanan.\n";
        return NULL;
    }
    Pohon *baru = new Pohon{data, NULL, NULL, node};
    node->right = baru;
    cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data << ".\n";
    return baru;
}

// Menampilkan Child dan Descendant
void tampilkanChild(Pohon *node) {
    if (!node) {
        cout << "\nNode tidak ditemukan.\n";
        return;
    }
    cout << "\nNode: " << node->data << "\n";
    cout << "Child Kiri: " << (node->left ? node->left->data : '-') << "\n";
    cout << "Child Kanan: " << (node->right ? node->right->data : '-') << "\n";
}

void tampilkanDescendant(Pohon *node) {
    if (!node) return;
    if (node->left) {
        cout << node->left->data << " ";
        tampilkanDescendant(node->left);
    }
    if (node->right) {
        cout << node->right->data << " ";
        tampilkanDescendant(node->right);
    }
}

// Validasi BST
bool is_valid_bst(Pohon *node, char min_val, char max_val) {
    if (!node) return true;
    if (node->data <= min_val || node->data >= max_val) return false;
    return is_valid_bst(node->left, min_val, node->data) &&
           is_valid_bst(node->right, node->data, max_val);
}

// Hitung Simpul Daun
int cari_simpul_daun(Pohon *node) {
    if (!node) return 0;
    if (!node->left && !node->right) return 1;
    return cari_simpul_daun(node->left) + cari_simpul_daun(node->right);
}

// Menu Utama
void menu() {
    int pilihan;
    do {
        cout << "\n==== MENU BINARY TREE ====\n";
        cout << "1. Buat Root\n";
        cout << "2. Tambah Node Kiri\n";
        cout << "3. Tambah Node Kanan\n";
        cout << "4. Tampilkan Child dan Descendant\n";
        cout << "5. Periksa Validasi BST\n";
        cout << "6. Hitung Simpul Daun\n";
        cout << "0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        char data, parent_data;
        Pohon *node = root;

        switch (pilihan) {
        case 1:
            cout << "Masukkan data root: ";
            cin >> data;
            buatNode(data);
            break;
        case 2:
            cout << "Masukkan data parent: ";
            cin >> parent_data;
            cout << "Masukkan data node kiri: ";
            cin >> data;
            for (Pohon *temp = root; temp; temp = (temp->left ? temp->left : temp->right)) {
                if (temp->data == parent_data) node = temp;
            }
            insertLeft(data, node);
            break;
        case 3:
            cout << "Masukkan data parent: ";
            cin >> parent_data;
            cout << "Masukkan data node kanan: ";
            cin >> data;
            for (Pohon *temp = root; temp; temp = (temp->left ? temp->left : temp->right)) {
                if (temp->data == parent_data) node = temp;
            }
            insertRight(data, node);
            break;
        case 4:
            cout << "Masukkan data node: ";
            cin >> data;
            for (Pohon *temp = root; temp; temp = (temp->left ? temp->left : temp->right)) {
                if (temp->data == data) node = temp;
            }
            tampilkanChild(node);
            cout << "\nDescendant: ";
            tampilkanDescendant(node);
            cout << "\n";
            break;
        case 5:
            cout << "Pohon adalah BST: " << (is_valid_bst(root, numeric_limits<char>::min(), numeric_limits<char>::max()) ? "Ya" : "Tidak") << "\n";
            break;
        case 6:
            cout << "Jumlah Simpul Daun: " << cari_simpul_daun(root) << "\n";
            break;
        case 0:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);
}

// Fungsi Utama
int main() {
    init();
    menu();
    return 0;
}
