#include <iostream>
#include <cmath> // Untuk operasi matematika seperti sqrt dan M_PI

using namespace std;

// Definisi ADT Kerucut
class Kerucut {
private:
    double radius; 
    double height; 

public:
    Kerucut(double r, double h) {
        radius = r;
        height = h;
    }

    double hitungGarisPelukis() const {
        return sqrt((radius * radius) + (height * height));
    }

    double hitungVolume() const {
        return (M_PI * radius * radius * height) / 3;
    }

    double hitungLuasPermukaan() const {
        double slantHeight = hitungGarisPelukis();
        return (M_PI * radius * (radius + slantHeight));
    }

    void tampilkanAtribut() const {
        cout << "Jari-jari (radius): " << radius << endl;
        cout << "Tinggi (height): " << height << endl;
        cout << "Garis pelukis (slant height): " << hitungGarisPelukis() << endl;
    }
};

int main() {
    Kerucut kerucut(5, 12);

    kerucut.tampilkanAtribut();

    cout << "Volume kerucut: " << kerucut.hitungVolume() << " satuan kubik" << endl;

    cout << "Luas permukaan kerucut: " << kerucut.hitungLuasPermukaan() << " satuan persegi" << endl;

    return 0;
}
