#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> solution(ll n)
{
    vector<long long> div;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if (i != n / i)
            {
                div.push_back(n / i);
            }
        }
    }
    return div;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            v[i] += v[i - 1];
        }
        vector<ll> div = solution(n);
        ll ans = 0;
        for (int it : div)
        {
            ll mn = LLONG_MAX, mx = 0;
            for (int i = it; i <= n; i += it)
            {
                mn = min(mn, v[i] - v[i - it]);
                mx = max(mx, v[i] - v[i - it]);
            }
            ans = max(ans, mx - mn);
        }
        cout << ans << endl;
    }
    return 0;
}