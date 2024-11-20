
#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    bool ans;
    cin>>t;
    while (t--)
    {
        ans = 1;
        cin >> s;
        set<char> unique;
        for (char c : s)
        {
            unique.insert(c);
        }
        int count = unique.size();
        for (int i = count; i < s.size(); i++)
        {
            if (s[i - count] != s[i])
            {
                ans = 0;
            }
        }
        if(ans==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}