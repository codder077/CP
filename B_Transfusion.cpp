#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }

        ll ods = 0, evs = 0;
        for (int i = 0; i < n; i++) {
            if (i & 1) ods += a[i];
            else evs += a[i];
        }
        int odc = n / 2, evc = n / 2;
        if (n & 1) evc++;

        if (ods % odc != 0 || evs % evc != 0 || ods / odc != evs / evc) {
            cout << "NO"<<endl;
        }
        else{
            cout << "YES"<<endl;
        }
    }

    return 0;
}
