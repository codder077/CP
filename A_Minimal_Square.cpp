#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;

        cin>>a>>b;

        if(a<b){
            if((2*a)==b){
                cout<<pow(b,2)<<endl;
            }
            else if((2*a)>b){
                cout<<pow((2*a),2)<<endl;
            }
            else{
                cout<<pow(b,2)<<endl;
            }
        }

        else{
            if((2*b)==a){
                cout<<pow(a,2)<<endl;
            }
            else if((2*b)>a){
                cout<<pow((2*b),2)<<endl;
            }
            else{
                cout<<pow(a,2)<<endl;
            }
        }
    }

    return 0;
}