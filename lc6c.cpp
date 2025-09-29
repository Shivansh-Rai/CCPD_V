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
        int max=*max_element(row.begin(),row.end());
        int min=*min_element(row.begin(),row.end());
        cout<<(max*max)+(min*min)<<endl;
    }
    

}
    
