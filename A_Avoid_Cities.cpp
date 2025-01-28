#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findShortestPath(int n, int m, int source, int target, vector<int>& cursed, vector<vector<int>>& roads) {
    vector<vector<int>> graph(n);
    
    // Build the graph
    for (auto& road : roads) {
        int u = road[0], v = road[1];
        if (!cursed[u] && !cursed[v]) { 
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
    }


    if (cursed[source] || cursed[target]) {
        return -1;
    }

    vector<int> visited(n, 0);
    queue<pair<int, int>> q; 
    
    q.push({source, 0});
    visited[source] = 1;

    while (!q.empty()) {
        pair<int, int> front = q.front();
        int current = front.first;
        int distance = front.second;
        q.pop();

        if (current == target) {
            return distance;
        }

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = 1;
                q.push({neighbor, distance + 1});
            }
        }
    }

    return -1; 
}

int main() {
    int n, m;
    cin >> n >> m;

    int source, target;
    cin >> source >> target;

    vector<int> cursed(n);
    for (int i = 0; i < n; ++i) {
        cin >> cursed[i];
    }

    vector<vector<int>> roads(m, vector<int>(2));
    for (int i = 0; i < m; ++i) {
        cin >> roads[i][0] >> roads[i][1];
    }

    int result = findShortestPath(n, m, source, target, cursed, roads);
    cout << result << endl;

    return 0;
}
