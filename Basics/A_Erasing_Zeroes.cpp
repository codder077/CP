#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int first=-1,last=-1;

        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='1' && first==-1){
                first=i;
                last=i;
            }
            else if(s[i]=='1' && first!=-1){
                last=i;
            }
        }

        if(first==-1){
            cout<<0<<endl;
        }

        else{
            int cnt=0;
            for(int i=first;i<last;i++){
                if(s[i]=='0'){
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }

    }

    return 0;
}