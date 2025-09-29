#include <bits/stdc++.h>
using namespace std;
int main(){

    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout) ;

// two strings s1 and s2
// rotate s1 rightwards by k positions abd s2 leftwards by k positions
// let s3 be the string obtained by combining the rotated version of s2 and s2
// if s3 is a palindrome print s3 and true else s3 and false


    
    int n1,n2,k;
    cin>>n1>>n2>>k;
    string s1,s2;
    cin.ignore();
    getline(cin,s1);
    getline(cin,s2);
    string s3="";
    s3+=s1.substr(n1-k,k)+s1.substr(0,n1-k);    
    s3+= s2.substr(k,n2-k)+s2.substr(0,k);
    string rev=s3;
    reverse(rev.begin(),rev.end());
    if (rev==s3){
        cout<<s3<<" True";

    }else{
        cout<<s3<<" False";
    }
    
       
}