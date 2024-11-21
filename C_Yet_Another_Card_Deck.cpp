#include <iostream>
using namespace std;
int i, x, f[51], n;
int main(){

    cin >> n >> x;
    while (n--){
        cin >> x;
        f[x] += (!f[x]) * (++i);
    }
        
    while (cin >> x)
    {
        cout << f[x] << " ";
        for (auto &y : f)
            y += y < f[x];
        f[x] = 1;
    }

    return 0;
}