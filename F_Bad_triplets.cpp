#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <unordered_map>
using namespace std;

struct State {
    int city;
    int prev_city;
    vector<int> path;
};

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> graph(N + 1);
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    unordered_set<string> forbidden_triplets;
    for (int i = 0; i < K; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        forbidden_triplets.insert(to_string(a) + "," + to_string(b) + "," + to_string(c));
    }

    queue<State> q;
    unordered_map<int, unordered_map<int, bool>> visited; 
    q.push({1, -1, {1}});

    while (!q.empty()) {
        State current = q.front();
        q.pop();
        
        if (current.city == N) {
            cout << current.path.size() << endl;
            for (int city : current.path) {
                cout << city << " ";
            }
            cout << endl;
            return 0;
        }

        for (int neighbor : graph[current.city]) {
            if (current.prev_city != -1) {
                string triplet = to_string(current.prev_city) + "," + to_string(current.city) + "," + to_string(neighbor);
                if (forbidden_triplets.find(triplet) != forbidden_triplets.end()) {
                    continue; 
                }
            }

            if (!visited[neighbor][current.city]) {
                visited[neighbor][current.city] = true;
                vector<int> new_path = current.path;
                new_path.push_back(neighbor);
                q.push({neighbor, current.city, new_path});
            }
        }
    }

    cout << -1 << endl;
    return 0;
}