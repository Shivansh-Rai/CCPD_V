//given a string consisting of digits alphabes and special char. transform this string 
//--> if alphabet convt to lower case
//--> digits as it is
//--> special character at last
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout) ;
    int n;
    cin >> n;
    cin.ignore();

    string s;
    getline(cin, s);

    string str2 = "";
    string spl = "";
    //for (auto chr:s)
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            s[i] = tolower(s[i]);
            str2 += s[i];
        } 
        else if (isdigit(s[i])) {
            str2 += s[i];
        } 
        else {
            spl += s[i];
        }
    }

    cout << str2 + spl;
    return 0;
}
