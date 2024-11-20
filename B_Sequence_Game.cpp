#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        vector<int> b;
        b.push_back(a[0]);

        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                if(a[i]==1){
                    b.push_back(a[i]);
                }
                else{
                    b.push_back(a[i]-1);
                }
                b.push_back(a[i]);
            }
            else{
                b.push_back(a[i]);
            }
        }

        int m=b.size();

        cout<<m<<endl;
        for(int i=0;i<m;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}