#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int i=0,j=n-1;

        while(i<j){
            if(s[i]==s[j]){
                break;
            }
            else{
                i++;
                j--;
            }
        }
        cout<<(j-i+1)<<endl;
    }

    return 0;
}