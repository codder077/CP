#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a,b;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            b.push_back(x);
        }

        int cnt=0;

        for(int i=0;i<n;i++){
            if(i!=n-1){
                if((a[i]-b[i+1] >0)){
                    cnt+=(a[i]-b[i+1]);
                }
            }
            else{
                cnt+=a[i];
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}