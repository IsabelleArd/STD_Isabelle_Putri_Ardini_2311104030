#include <iostream>
#include "list.h"
using namespace std;

int main() {
    List L;                
    infotype x;            
    address p;             

    cout << "Enter first number: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);

    cout << "Enter second number: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);

    cout << "Enter third number: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);

    cout << "Enter fourth number: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);

    cout << "Enter fifth number: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);

    cout << "Enter sixth number: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);

    cout << "Enter seventh number: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);

    cout << "Enter eighth number: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);

    cout << "Enter ninth number: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);

    cout << "Enter tenth number: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);
    
    cout << "Isi list: ";
    printInfo(L);
     
    return 0;
}
