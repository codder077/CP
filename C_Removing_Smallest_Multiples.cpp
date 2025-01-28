

#include<bits/stdc++.h>
#include<iterator>
using namespace std;
#define endll "\n"
#define ll long long

set<char>s;

vector<ll>v1, v2;
int main()
{
    ll Tc; cin >> Tc;
    while(Tc--){
        v1.clear();
        v2.clear();
        ll n, sum = 0; cin >> n;
        string s; cin >> s;
        for(ll i = 1; i <= n; i++){
            ll n;
            stringstream ss;
            ss << s[i - 1];
            ss >> n;
            v1.push_back(n);
            v2.push_back(i);
        }
        for(ll i = 1; i <= n; i++){
            if(v1[i - 1] == 0){
                sum += v2[i - 1];
                for(ll j = (i + i); j <= n; j += i){
                    if(v1[j - 1] == 0){
                        sum += v2[i - 1];
                        v1[j - 1] = 2;
                    }
                    else if(v1[j - 1] == 1) break;
                }
            }
            else if(v1[i - 1] == 2){
                for(ll j = (i + i); j <= n; j += i){
                    if(v1[j - 1] == 0){
                        sum += v2[i - 1];
                        v1[j - 1] = 2;
                    }
                    else if(v1[j - 1] == 1) break;
                }
            }
        }
        cout << sum << endll;
    }
    return 0;
}