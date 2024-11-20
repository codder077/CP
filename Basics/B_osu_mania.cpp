#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        char a[n][4];  
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 4; j++) {
                cin >> a[i][j]; 
            }   
        }
        
        int ans[n];
        for(int i = n - 1; i >= 0; i--) {
            for(int j = 0; j < 4; j++) {
                if(a[i][j] == '#') {  
                    ans[i] = j+1;
                    break;
                }
            }   
        }

        for(int i = n-1; i >=0; i--) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
