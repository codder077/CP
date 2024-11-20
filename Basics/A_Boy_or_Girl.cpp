#include <bits/stdc++.h>
using namespace std;

int cntDistinct(string str){
    map<char, int> count;
    for(int i = 0; i < str.size(); i++){
        count[str[i]]++;
    }
    return count.size();
}

int main(){
    string s;
    cin>>s;

    int n= cntDistinct(s);;

    if(n%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}