//you are givn a string s consisting of alphabets digits and special char
// reverse only alphabet
#include <bits/stdc++.h>
using namespace std;
string reverse(string s) {
    string letters = "";
    for (char c : s)
        if (isalpha(c))
            letters += c;
    
    int j = letters.size() - 1;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            s[i] = letters[j--];
        }
    }
    return s;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    string s;
    cin>>s;
    cout<<reverse(s);
}




