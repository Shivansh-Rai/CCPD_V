#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string res1="", res2="";

    string s;
    cin>>s;
    for (int i=0; i<s.size();i++){
        if ((i>=1) && ((i+1)%4==0) || ((i+1)%6==0)){
            res1+=s[i];
        }else{
            res2+=s[i];
        }

    }
    cout<<res2+res1;
}
