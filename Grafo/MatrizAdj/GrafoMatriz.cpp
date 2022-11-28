//
// Created by Kheven Colino on 15/11/2022.
//

#include "iostream"
#include "GrafoMatriz.h"

void GrafoMatriz::GrafoMatriz() {
    int n;
    cin >> n;
    adjList.resize(n,vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            int u;
            cin >> u;
            adjList[i][j] = u;
        }
    }
}

void GrafoMatriz::ImprimeMatriz() {

    for (int i = 0; i < adjList.size(); ++i) {
        cout << i;
        for (int j = 0; j < adjList.size(); ++j) {
            if (adjList[i][j] != 0){
                cout << "->" << j;
            }

        }
        cout << endl;
    }
}
