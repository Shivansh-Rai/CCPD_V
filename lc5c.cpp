//given an array of n positive integers. for each element print the first greater element towards the right of the element, if no greater 
// is found, print 0
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        int gr=0;
        for (int j=i+1;j<n;j++){
            if (arr[i]<arr[j]){
                gr=arr[j];
                break;
            }
        }cout<<gr<<" ";
    }

}