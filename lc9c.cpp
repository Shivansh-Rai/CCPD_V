/*
given n sentences with m words
the first line of input contains space separated values of n and m
next n lines m space-separated strings
read this input as list  of list 
print length of first and last words from each row
*/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     freopen("input.txt" ,"r" ,stdin);
//     freopen("output.txt" , "w" ,stdout) ;
//     int n,m;
//     cin>>n>>m;
//     vector<vector<string>> v(n, vector<string>(m));
//     for (int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             cin>>v[i][j];
//         }
//     }
//     for (int i=0;i<n;i++){
//         cout<<v[i][0].size()<<" "<<v[i][m-1].size()<<endl;
//     }
// }

//given two strings s1 and s2 having lengths n and m respectively print the count of instances 
//of each character from s1 and s2
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout) ;
    int n,m;
    cin>>n>>m;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for (int i=0;i<s1.size();i++){
        char s=s1[i];
        int count =0;
        for (int j=0; j<m;j++){
            if (s2[j]==s){
                count+=1;
            }
        }cout<<count<<" ";
       
    }

}