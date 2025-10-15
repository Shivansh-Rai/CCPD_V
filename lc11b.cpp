//the marks of N students of a particular class are given as space separated values. 
//Find out the position of each student in the class
//pos 1 is assigned to a student with maximum marks and so on.
//If two students get the same marks then both will be assigned the same position and
// next position will be skipped 

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end(), greater<int>());

    vector<int> pos(n);

    for (int i = 0; i < n; i++) {
        int rank = 1;
        for (int j = 0; j < n; j++) {
            if (sorted[j] > arr[i])
                rank++;
            else if (sorted[j] == arr[i])
                break;
        }
        pos[i] = rank;
    }

    for (int i = 0; i < n; i++)
        cout << pos[i] << " ";

    return 0;
}
