#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; i++) cin >> arr1[i];
    for (int i = 0; i < n; i++) cin >> arr2[i];

    
    vector<int> arr3 = arr1;
    arr3.insert(arr3.end(), arr2.begin(), arr2.end());

    
    sort(arr3.begin(), arr3.end());

    
    int middle = arr3.size() / 2;
    int sum = arr3[middle - 1] + arr3[middle];

    cout << sum;
    return 0;
}
