#include <bits/stdc++.h>
using namespace std;
int main(){

    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout) ;

//given string s of length n and an integer k, then create a new string
//pick first k characters as it is
//followed by next k characters in reverse order
//followed by next k characters as it is and so on


    
    int n,k;
    string s,p1,p2;
    cin>>n>>k;
    cin.ignore();
    getline(cin,s);
    string res="";
    for (int i=0; i<n;i+=2*k){
        p1=s.substr(0+i,k);
        p2=s.substr(k+i,k);
        reverse(p2.begin(),p2.end());
        res+=p1;
        res+=p2;
    }cout<<res;
       
}