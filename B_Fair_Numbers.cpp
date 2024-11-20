#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isFair(ll n) {
    ll num = n;
    while (num!=0){
        int x = num%10;
        if (x!=0 && n%x!=0){
            return false;
        }
        num/=10;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        while (!isFair(n)) {
            n += 1;
        }
        cout<<n<<"\n";
    }
    return 0;
}