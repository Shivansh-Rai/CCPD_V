//swap matrix element with bottom right

// sample input

// 3 4
// 24 29 12 33 
// 25 36 18 17 
// 31 22 43 67 

//output
// 36 18 17 33 
// 22 43 67 12 
// 31 25 24 29 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            swap(mat[i][j], mat[i+1][j+1]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
