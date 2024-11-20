#include<bits/stdc++.h>
using namespace std;
#define ll long long

int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;

        int ans=0;
        if(isSubstring(b,a)!=-1){
            cout << ans <<endl;
            continue;
        }
         bool flag = false;    
        do
        {   
            ans++;
            a += a;
            
            if(isSubstring(b, a) != -1)
            {
                flag = true;
                break;
            }
        }while((a.size() <= b.size()+m));
        if(flag)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }

    return 0;

    }