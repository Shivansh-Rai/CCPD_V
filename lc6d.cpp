//swao the last k elements with from the first row with first k elements from last row
//swap the last k elements from the second row and first k elements from the second last
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,m,k;
    cin>>n>>m>>k;
    vector <vector <int>> mat(n,vector<int>(m));
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>mat[i][j];

        }
    }
    for (int i=0;i<n;i++){
        for (int j=k;j<m;j++){
            swap(mat[i][j],mat[n-i-1][j-k-1]);    //swap(val1,val2);


        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";


        }cout<<endl;
    }


}
    
