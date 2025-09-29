//given an array having n elements, find the first locations of the minimum and maxumum elements. split
//the array into 3 parts from these locations and build another arrray by concatenating the second part followed by the first 
//part followed by the third part. Print the elements of this array in single line
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIdx]) minIdx = i;
        if (arr[i] > arr[maxIdx]) maxIdx = i;
    }

    
    if (minIdx > maxIdx) swap(minIdx, maxIdx);

    
    vector<int> result;
    
    for (int i = minIdx; i <= maxIdx; i++) result.push_back(arr[i]);
    
    for (int i = 0; i < minIdx; i++) result.push_back(arr[i]);
    
    for (int i = maxIdx + 1; i < n; i++) result.push_back(arr[i]);

    
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;

}