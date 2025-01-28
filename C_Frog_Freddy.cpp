#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

struct Leaf {
    int x, y;
    bool operator==(const Leaf& other) const {
        return x == other.x && y == other.y;
    }

    struct Hash {
        size_t operator()(const Leaf& leaf) const {
            return hash<int>()(leaf.x) ^ hash<int>()(leaf.y);
        }
    };
};

int main() {
    int N, M;
    cin >> N >> M;
    
    string commands;
    cin >> commands;

    unordered_set<Leaf, Leaf::Hash> leafSet;

    vector<Leaf> leaves(N);
    for (int i = 0; i < N; i++) {
        cin >> leaves[i].x >> leaves[i].y;
        leafSet.insert(leaves[i]);
    }

    Leaf current_position = leaves[0];
    leafSet.erase(current_position); 

    for (char command : commands) {
        int a = current_position.x;
        int b = current_position.y;

        bool moved = false;

        switch (command) {
            case 'A': 
                for (int Z = 1; Z <= 100000 && !moved; Z++) {
                    Leaf nextLeaf = {a + Z, b + Z};
                    if (leafSet.count(nextLeaf)) {
                        current_position = nextLeaf;
                        leafSet.erase(current_position);  
                        moved = true;
                    }
                }
                break;

            case 'B': 
                for (int Z = 1; Z <= 100000 && !moved; Z++) {
                    Leaf nextLeaf = {a + Z, b - Z};
                    if (leafSet.count(nextLeaf)) {
                        current_position = nextLeaf;
                        leafSet.erase(current_position);
                        moved = true;
                    }
                }
                break;

            case 'C': 
                for (int Z = 1; Z <= 100000 && !moved; Z++) {
                    Leaf nextLeaf = {a - Z, b + Z};
                    if (leafSet.count(nextLeaf)) {
                        current_position = nextLeaf;
                        leafSet.erase(current_position);
                        moved = true;
                    }
                }
                break;

            case 'D': 
                for (int Z = 1; Z <= 100000 && !moved; Z++) {
                    Leaf nextLeaf = {a - Z, b - Z};
                    if (leafSet.count(nextLeaf)) {
                        current_position = nextLeaf;
                        leafSet.erase(current_position);
                        moved = true;
                    }
                }
                break;

            default:
                continue;
        }
    }

    cout << current_position.x << " " << current_position.y << endl;

    return 0;
}
