#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        vector<string> a;
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            a.push_back(s);
        }
        int cnt = 0,sum=0;
        int i=0;
        while(i< n && sum<= m){
            sum+=a[i].length();
            if(sum>m){
                break;
            }
            cnt++;
            i++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}