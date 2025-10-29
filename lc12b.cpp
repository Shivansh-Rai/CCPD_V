// given two strings S and R. Replace all the instances of R and S with a 
// new string formed by 
// concatenating the character just before R by as many times as the length of R

#include <bits/stdc++.h>
using namespace std;

string fun(string s, string r){
    int len_r=r.size();
    int len_s=s.size();
    int index= s.find(r) ;
    if (index==0){
        s=s.substr(index+len_r);
    }

    else if(index<len_s-len_r){
        string p1=s.substr(0,index);
        string p2=string(len_r,p1.back());
        string p3=s.substr(index+len_r);
        s=p1+p2+p3;
    }
    else{
        string p1=s.substr(0,index);
        string p2=string(len_r,p1.back());
        s=p1+p2;
    }

    return s;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s,r;
    cin>>s>>r;
    fun(s,r);
}
