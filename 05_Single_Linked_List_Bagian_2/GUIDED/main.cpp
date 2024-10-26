#include "singleList.cpp"
int main()
{
    List L;
    Elemen *P1, *P2, *P3, *P4, *P5 = NULL;
    createList(L);

    // alokasi + insert data
    P1 = alokasi(2);
    insertList(L, P1);

    P2 = alokasi(0);
    insertList(L, P2);

    P3 = alokasi(8);
    insertList(L, P3);

    P4 = alokasi(12);
    insertList(L, P4);

    P5 = alokasi(9);
    insertList(L, P5);

    // cetak output
    printInfo(L);  // corrected printInfo call

    // Cari elemen nilai 8 (contoh)
    Elemen *found = findElm(L, 8);
    if (found != NULL)
    {
        cout << "Elemen dengan nilai 8 ditemukan" << endl;
    }
    else
    {
        cout << "Elemen dengan nilai 8 tidak ditemukan" << endl;
    }

    // hitung total semua elemen
    int total = sumAllElements(L);  // corrected hitungTotal call
    cout << "Total elemen keseluruhan: " << total << endl;
}