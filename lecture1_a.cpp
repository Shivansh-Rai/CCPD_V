//problem 1 
//given a string determine if it contains both the characteres & and # and the length of the string is even if conditions are satisfied print YES
#include <bits/stdc++.h>
using namespace std;
int main() {
    


    string s;
    cin>>s;
    int l=s.length();
    int s1=count(s.begin(),s.end(),'&');
    int s2=count(s.begin(),s.end(),'#');
    if (s1>0 && s2>0 && l%2==0){
        cout<<"Yes";

    }else{
        cout<<"No";
    }
    return 0;
}
