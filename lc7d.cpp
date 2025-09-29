
#include <bits/stdc++.h>
using namespace std;

int main() {
    // char a;
    // cin>>a;
    // cout<<int(a);
    
    int k,n,m;
    cin>>k>>n>>m;
    string s;
    cin>>s;
   
    
    
    
    int count=0;
    for (int i=0;i<k;i++){
        if (int(s[i])>n && int(s[i]<m)){
            count+=1;
        }
    }
    cout<<count;
    
    
    return 0;
}
