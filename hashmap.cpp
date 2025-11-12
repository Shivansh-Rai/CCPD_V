
#include <bits/stdc++.h>
using namespace std;


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n; // number of elements
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> freq;

    // count frequency of each number
    for (int num : arr)
        freq[num]++;

    int uniqueCount = 0, nonUniqueCount = 0;

    // count unique and non-unique elements
    for (auto &p : freq) {
        if (p.second == 1)
            uniqueCount++;
        else
            nonUniqueCount++;
    }

    cout << uniqueCount * nonUniqueCount << endl;
    
    
    
}




