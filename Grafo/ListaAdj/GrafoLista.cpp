//
// Created by Kheven Colino on 15/11/2022.
//

#include "iostream"
#include "GrafoLista.h"

GrafoLista::GrafoListaInsere() {
    int n;
    cin >> n;
    adjList.resize(n,vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            int u;
            cin >> u;
            if (u != 0) {
                adjList[i].push_back(j);
            }
        }
    }
}

void GrafoLista::Imprime() {

    for (int v = 0; v < adjList.size(); ++v) {
        cout << "\n Lista adj ver No.  " << v << "\n cabeca ";
        for (auto x : adjList[v])
            if (x != 0) {
                cout << "-> " << x;
            }
        cout << endl;
    }
}