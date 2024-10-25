#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define UNVISITED -1
#define VISITED 1

vi dfs_num;
vector<vii> AdjList;

void dfs(int u) {
    cout << "Visitando nodo " << u << endl;
    dfs_num[u] = VISITED;
    for (int j = 0; j < (int)AdjList[u].size(); j++) {
        ii v = AdjList[u][j];
        if (dfs_num[v.first] == UNVISITED)
            dfs(v.first);
    }
}

int main() {
    int V = 6;
    AdjList.assign(V, vii());
    dfs_num.assign(V, UNVISITED);

    // Agregamos aristas al grafo
    AdjList[0].push_back(ii(1, 0));
    AdjList[1].push_back(ii(2, 0));
    AdjList[2].push_back(ii(0, 0));
    AdjList[1].push_back(ii(3, 0));
    AdjList[3].push_back(ii(4, 0));
    AdjList[4].push_back(ii(5, 0));

    // Iniciamos DFS desde el nodo 0
    dfs(0);
    return 0;
}
