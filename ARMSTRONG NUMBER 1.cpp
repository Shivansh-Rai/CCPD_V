//ARMSTRONG NUMBER

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for (int i=a;i<b;i++){
        
        string s=to_string(i);
        int l=s.size();
        int sum=0;
        for (char j : s){
            int num = j-'0'; //convert string to integer
            sum+= pow(num,l);
        }
        if (sum==i){
            cout<<sum<<" ";
        }
    }
}