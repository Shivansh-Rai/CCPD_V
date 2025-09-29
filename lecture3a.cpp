//you are given marks of some students print the sum of marks of the top 5 student and the marks of last 5 student in decreasing order 
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int arr[5];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }sort(arr,arr+n,greater<int>());//used to sort like in python 
    int sum=accumulate(arr,arr+5,0);
    cout<<sum<<endl;
    for (int j=n-5;j<n;j+=2){
        cout<<arr[j]<<" ";
        
    }
    return 0;
}