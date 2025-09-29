//given array of n group of students in the format specified, print the maximum minimum toal and average marks 
// the built in function 
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t,n;
    cin>>t;
    cout<<"enter array size ";
    cin>>n;
    int arr[n];

    for (int i=0; i<t; i++){
        for (int j=0 ; j<n ; j++){
            cin>>arr[j];
        }
    }
    float s=accumulate(arr,arr+n,0);
    float avg=s/n;
    
    cout<<"average is"<<avg<<endl;
    cout<<"sum is"<<s<<endl;
    cout<<"max element: "<<*max_element(arr,arr+n);
    cout<<"min element: "<<*min_element(arr,arr+n);
    return 0;
}