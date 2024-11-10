# include <iostream>
using namespace std;

struct Node {
    string nama;
    string NIM;
    Node* next;
};

Node* front = nullptr;
Node* back = nullptr;

// Memeriksa queue kosong atau tidak
bool isEmpty() {
    return front == nullptr;
}

// Menambah antrian
void enqueueAntrian(string nama, string NIM) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->NIM = NIM;
    newNode->next = nullptr;

    if (isEmpty()) {
        front = back = newNode;
    } else {
        // Jika NIM lebih kecil, masukkan di depan
        if(newNode->NIM < front->NIM) {
            newNode->next = front;
            front = newNode;
        } else {
            Node* temp = front;
            while (temp->next != nullptr && temp->next->NIM < newNode->NIM) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;

            if (newNode->next == nullptr) {
                back = newNode;
            }
        }
    }
}

// Menghapus elemen dari depan antrian
void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong." << endl;
    } else {
        Node* temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr) {
            back = nullptr;
        }
    }
}

// Menghitung eleman dalam antrian
int countQueue() {
    int count = 0;
    Node* temp = front;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Mengosongkan antrian
void clearQueue() {
    while (isEmpty()) {
        dequeueAntrian();
    }
    cout << "Antrian telah dikosongkan." << endl;
}

// Menampilkan isi antrian
void viewQueue() {
    cout << "Data antrian Mahasiswa: " << endl;
    Node* temp = front;
    int position = 1;
    while (temp != nullptr) {
        cout << position++ << ". Nama: " << temp->nama << ", NIM: " << temp->NIM << endl;
        temp = temp->next;
    }
}

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    // Input data Mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        string nama, NIM;
        cout << "Nama Mahasiswa: " << i + 1 << ": ";
        cin >> nama;
        cout << "NIM Mahasiswa: " << i + 1 << ": ";
        cin >> NIM;
        enqueueAntrian(nama, NIM);
    }

    // Tampilkan isi antrian
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;

    // Hapus elemen dari antrian
    dequeueAntrian();
    cout << "Setelah dequeue: " << endl;
    viewQueue();
    cout << "Jumlah antrian: " << countQueue() << endl;

    // Hapus semua antrian
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;

    return 0;
}