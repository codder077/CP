#include<bits/stdc++.h>
using namespace std;
#define ll long long

int lcs(string &s1, string &s2){
    int n = s1.size();
    int m = s2.size();
    
    vector<int> prev(m+1, 0);
    vector<int> cur(m+1, 0);  

    int ans = 0; 

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s1[i-1] == s2[j-1]){
                int val = 1 + prev[j-1]; 
                cur[j] = val; 
                ans = max(ans, val); 
            }
            else
                cur[j] = 0; 
        }
        prev = cur;
    }
    
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        int n = lcs(s1,s2);

        cout<< (s1.length()-n) + (s2.length()-n)<<endl;
    }
    return 0;
}