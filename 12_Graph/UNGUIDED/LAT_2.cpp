#include <iostream>
#include <vector>
using namespace std;

void adjacencyMatrixGraph() {
    int vertices, edges;
    cout << "Masukkan jumlah simpul: ";
    cin >> vertices;
    cout << "Masukkan jumlah sisi: ";
    cin >> edges;

    vector<vector<int>> matrix(vertices, vector<int>(vertices, 0));
    cout << "Masukkan pasangan simpul:\n";

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        matrix[u - 1][v - 1] = 1;
        matrix[v - 1][u - 1] = 1;  // Undirected graph
    }

    // Display the adjacency matrix
    cout << "Adjacency Matrix:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
}

int main() {
    adjacencyMatrixGraph();
    return 0;
}
