#include<bits/stdc++.h>
using namespace std;
#define ll long long

int xorOfFirstNNumbers(int n) {  
    if (n % 4 == 0) return n; 
    else if (n % 4 == 1) return 1; 
    else if (n % 4 == 2) return n + 1; 
    else return 0; 
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x_or=xorOfFirstNNumbers(a-1);
         
        int n_or= b^x_or;
        if(x_or==b){
            cout<<a<<endl;
        }
        else{
            if(n_or==a){
                cout<<a+2<<endl;
            }
            else{
                cout<<a+1<<endl;
            }
        }
    }
    return 0;
}