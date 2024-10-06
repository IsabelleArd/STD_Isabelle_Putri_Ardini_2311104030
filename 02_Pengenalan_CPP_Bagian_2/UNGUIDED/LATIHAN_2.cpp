// 1. Output array, genap, dan ganjil
/*#include <iostream>

using namespace std;

int main() {
    int bil[10];

    for (int a = 0; a < 10; a++) {
        bil[a] = a + 1;
    }

    cout << "Data Array: ";
    for (int a = 0; a < 10; a++) {
        cout << bil[a] << " ";
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int a = 0; a < 10; a++) {
        if (bil[a] % 2 == 0) {
            cout << bil[a] << " ";
        }
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int a = 0; a < 10; a++) {
        if (bil[a] % 2 != 0) {
            cout << bil[a] << " ";
        }
    }
    cout << endl;

    return 0;
}*/


// 2. Array 3 dimensi
/*
#include <iostream>

using namespace std;

int main() {
    int baris, kolom, lapis;

    // Meminta user untuk memasukkan jumlah baris, kolom, dan lapis
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;
    cout << "Masukkan jumlah lapis: ";
    cin >> lapis;

    // Deklarasi array 3D berdasarkan input user
    int array[lapis][baris][kolom];

    // Input elemen array dari user
    for (int i = 0; i < lapis; i++) {
        for (int j = 0; j < baris; j++) {
            cout << "Masukkan elemen lapis " << i + 1 << " baris " << j + 1 << ": ";
            for (int k = 0; k < kolom; k++) {
                cin >> array[i][j][k];
            }
        }
    }

    // Menampilkan elemen array
    cout << "\nHasil array 3 dimensi:\n";
    for (int i = 0; i < lapis; i++) {
        cout << "Lapis " << i + 1 << endl;
        for (int j = 0; j < baris; j++) {
            for (int k = 0; k < kolom; k++) {
                cout << array[i][j][k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
*/

// 3. Nilai maksimum, minimum, dan rata-rata
/*
#include <iostream>

using namespace std;

int cariMaks(int arr[], int n) {
    int maks = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }
    return maks;
}

int cariMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double RataRata(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return (double) total / n;
}

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int pilihan;
    do {
        cout << "\nMenu:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Nilai Maksimum: " << cariMaks(arr, n) << endl;
                break;
            case 2:
                cout << "Nilai Minimum: " << cariMin(arr, n) << endl;
                break;
            case 3:
                cout << "Nilai Rata-rata: " << RataRata(arr, n) << endl;
                break;
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih menu yang tersedia.\n";
        }
    } while (pilihan != 4);

    return 0;
}
*/