#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int first=0;
    if(n%2==0){
        first=n/2;
    }
    else{
        first=(n/2)+1;
    }
    
    int last=n;

    for(int i=first;i<=last;i++){
        if(i%m==0){
            cout << i << endl;
            return 0;
        }
    }

    cout<<-1<<endl;

    return 0;
}