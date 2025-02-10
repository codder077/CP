#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        int n=s.length();
        bool find=false;
        for(int i=0;i<n;i++){
            int j=i+1;
            if(j<n && s[j]==s[i]){
                find=true;
                break;
            }
        }

        if(find){
            cout<<1<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }

    return 0;
}
