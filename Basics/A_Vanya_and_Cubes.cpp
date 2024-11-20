#include <iostream>
using namespace std;

int main() {
    int n;  // Number of cubes
    cin >> n;
    
    int height = 0;  
    int cubesUsed = 0;  
    
    int level = 1;  
    
    while (true) {
        int cubesForThisLevel = level * (level + 1) / 2;  
        
        if (cubesUsed + cubesForThisLevel > n) {
            break;  
        }
        
        cubesUsed += cubesForThisLevel;  
        height++;  
        level++; 
    }
    
    cout << height << endl;  
    return 0;
}
