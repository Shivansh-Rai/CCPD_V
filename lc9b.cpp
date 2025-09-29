//given an alphanumeric string s 
//let the sum of squares of digits in S be K. If k is even, rotate the alphabets of s rightwards 
//by k positions, otherwise rotate it left by k positions 

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout) ;
    int sqr=0;
    int n;
    cin>>n;
    string s;
    string res="";
    cin.ignore();
    getline(cin,s);
    for (auto c: s){
         if(isalpha(c)){
            res+=c;
        }else{
            int val=c-'0';
            sqr+=val*val;
        }
    }
    int len=res.size();
    if (len>0){
        if (sqr%2==0){
            sqr%=len;
            res=res.substr(len-sqr)+res.substr(0,len-sqr);
        }else{
            sqr%=len;
            res=res.substr(sqr)+res.substr(0,sqr);
        }
    }
    cout<<res;
}
