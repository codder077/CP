#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    string vowel="aeyiouAEYIOU";
    string result;

    for(char c:s){
        c=tolower(c);

        if(vowel.find(c)==string::npos){
            result+='.';
            result+=c;
        }
    }

    cout<<result<<endl;

    return 0;

}