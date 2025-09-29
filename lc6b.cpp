//given 2d array print sum, max and min element

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,m;
    cin>>n>>m;
    vector <vector <int>> mat(n,vector<int>(m));
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>mat[i][j];

        }
    }
   
    for (auto row:mat){
        int sum=accumulate(row.begin(),row.end(),0);
        cout<<sum<<" ";
        int mx=*max_element(row.begin(),row.end());
        cout<<mx<<" ";
        int mn=*min_element(row.begin(),row.end());
        cout<<mn;

    }
    
}


        
        
        
    


