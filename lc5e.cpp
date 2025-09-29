//KADANE ALGORITHM
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr;
    vector <int> arr2;
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    
    for (int i=0; i<n;i++){
        int sum=0;
        for (int j=i+1;j<n;j++){
            sum+=arr[i]+arr[j];
            
            
        }arr2.push_back(sum);

    }
    int m = *max_element(arr2.begin(), arr2.end());
    cout<<m;
}