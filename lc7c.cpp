#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    int n;

    
    getline(cin, s1);
    getline(cin, s2);

    cout << "n:  ";
    cin >> n;

    for (int i=n;i<s1.size();i+=n){
        
        s1.insert(i,s2);
    }

    cout<<s1;

    

    return 0;
}
