#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
     ll n, m, a;
    cin >> n >> m >> a;

    ll flagstones_length = (n + a - 1) / a;
    ll flagstones_width = (m + a - 1) / a;

    ll ans = flagstones_length * flagstones_width;

    cout << ans << endl;

    return 0;
}