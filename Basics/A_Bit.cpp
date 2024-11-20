#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string sta[n];
    for(int i=0;i<n;i++){
        cin>>sta[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(sta[i][0]=='+' || sta[i][1]=='+'){
            c++;
        }
        else{
            c--;
        }
    }

    cout<<c<<endl;

}