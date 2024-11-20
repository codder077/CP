#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, ans = 0;
    string s;
    cin >> n >> s;
    unordered_set<char> st1, st2;
    vector<int> pf(n), sf(n);
    for(int i=0;i<n;i++)
    {
        st1.insert(s[i]);
        pf[i] = st1.size();
    }
    for (int i = n - 1; i >= 0; i--)
    {
        st2.insert(s[i]);
        sf[i] = st2.size();
    }
    for (int i = 0; i < n - 1; i++)
        ans = max(ans, pf[i] + sf[i + 1]);
    cout << ans << endl;
}

int main()
{
    int test = 1;
    cin >> test;
    while (test--)
        solve();

    return 0;
}
