#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> ans;

        int num=(n/2);
        if(num%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=1;i<=num;i++){
                ans.push_back((2*i));
            }
             for(int i=1;i<=num;i++){
                if(i<=(num/2)){
                    ans.push_back((2*i)-1);
                }
                else{
                    ans.push_back((2*i)+1);
                }
            }

            cout<<"YES"<<endl;
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}