#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, int> mp;
    vector <int> arr={1,2,1,5,8,7,1,2,9};
    for (auto i: arr){
        mp[i]++;
    }
    for (auto pair: mp){
        cout<<pair.first<<pair.second<<endl;
    }
}      

    
    
    





