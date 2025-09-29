//given 2 arrays A and B having lengths N and M respectively ;for eahc B[i] print the count of elements from Ai which is greater than B[i]
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin >>n>>m;
    
    int a[n],b[m];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<m;i++){
        cin>>b[i];
    }
    for (int i=0;i<m;i++){
        int count=0;
        for (int j=0;j<n;j++){
            if (a[j]>b[i]){
                count+=1;
            }
        }cout<<count<<" ";
    }


}