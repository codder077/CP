#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int maxi = a[n-1];     
    int smaxi = a[n-2];    

    int num_full_blocks = m / (k + 1); 
    int remaining_emotes = m % (k + 1); 


    ll total_happiness = num_full_blocks * (k * (ll)maxi + smaxi);

    total_happiness += remaining_emotes * (ll)maxi;
    

    cout << total_happiness << endl;

    return 0;
}
