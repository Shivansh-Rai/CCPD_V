#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        
        for (int j=0;j<n;j++){
            cin>>arr[j];
        }
        for (int k=0;k<n;k++){
            cout<<arr[k]<<" ";

        }cout<<endl;

    }
    return 0;
}
