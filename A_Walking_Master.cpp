#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        ll a, b, c, d, ans = 0;
        cin >> a >> b >> c >> d;
        if (a == c && b == d)
        {
            cout << 0 << endl;
            continue;
        }
        if (d < b)
        {
            cout << -1 << endl;
            continue;
        }
        while (b != d)
        {
            b++;
            a++;
            ans++;
        }
        if (a < c)
        {
            cout << -1 << endl;
            continue;
        }
        while (a != c)
        {
            a--;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}