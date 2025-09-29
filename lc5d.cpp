//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    vector <int> tr;

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            tr.push_back(arr[j]-arr[i]);
            
        }
            
    }
    m = *max_element(tr.begin(), tr.end());
    cout<<m;
        
    
    
    
    




}


