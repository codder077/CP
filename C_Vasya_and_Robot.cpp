#include<bits/stdc++.h>
using namespace std;

bool check(int len, const vector<int>& prex, const vector<int>& prey, int n, int x, int y) {
    for (int i = 0; i + len <= n; i++) {
        int nx = prex[n] - (prex[i + len] - prex[i]);
        int ny = prey[n] - (prey[i + len] - prey[i]);

        int dist = abs(x - nx) + abs(y - ny);

        if (dist <= len && dist % 2 == len % 2) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, x, y;
    string s;
    cin >> n >> s >> x >> y;

    vector<int> prex(n + 1, 0), prey(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prex[i + 1] = prex[i];
        prey[i + 1] = prey[i];
        if (s[i] == 'U') prey[i + 1]++;
        else if (s[i] == 'D') prey[i + 1]--;
        else if (s[i] == 'L') prex[i + 1]--;
        else if (s[i] == 'R') prex[i + 1]++;
    }

    int dx = abs(prex[n] - x), dy = abs(prey[n] - y);
    if ((dx + dy) % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }

    int l = 0, h = n, res = -1;
    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (check(mid, prex, prey, n, x, y)) {
            res = mid;
            h = mid - 1;  
        } else {
            l = mid + 1;
        }
    }

    cout << res << endl;
    return 0;
}
