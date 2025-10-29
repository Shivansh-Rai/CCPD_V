#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> number(n);
    vector<int> zero(n);

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    

    for (int i=0;i<n;i++){
        if (arr[i]==0){
            zero.push_back(arr[i]);

        }
        else{
            number.push_back(arr[i]);
        }
    }
    number.insert(number.end(), zero.begin(), zero.end());
    for (int i=0;i<number.size();i++){
        cout<<number[i]<<" ";
    }

}
