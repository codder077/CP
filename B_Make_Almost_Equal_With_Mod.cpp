#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;


void print_ans(ull n){
    cout << (2ULL << __builtin_ctzll(n)) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ull ans1 = 18446744073709551615, ans2 = 0, temp;
        int N;cin>>N;
        for(int i=0; i<N;i++)
        {
            cin >> temp;
            ans1 &= temp;
            ans2 |= temp;
        }
        ull n=ans1^ans2;
        print_ans(n);
    }
    return 0;
}