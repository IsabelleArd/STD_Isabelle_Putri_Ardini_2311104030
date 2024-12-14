#include <iostream>
#include <vector>
#include <string>
using namespace std;

void weightedGraph() {
    int n;
    cout << "Silahkan masukkan jumlah simpul: ";
    cin >> n;

    vector<string> vertices(n);
    cout << "Silahkan masukkan nama simpul:\n";
    for (int i = 0; i < n; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> vertices[i];
    }

    vector<vector<int>> weights(n, vector<int>(n));
    cout << "Silahkan masukkan bobot antar simpul:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << vertices[i] << "-->" << vertices[j] << " = ";
            cin >> weights[i][j];
        }
    }

    // Display the weight matrix
    cout << "\n\t";
    for (const auto& v : vertices) {
        cout << v << "\t";
    }
    cout << "\n";

    for (int i = 0; i < n; i++) {
        cout << vertices[i] << "\t";
        for (int j = 0; j < n; j++) {
            cout << weights[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main() {
    weightedGraph();
    return 0;
}
