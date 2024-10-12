#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepe = "STD";
    pelajaran pel = create_pelajaran(namapel, kodepe);
    tampil_pelajaran(pel);
    
    return 0;
}
