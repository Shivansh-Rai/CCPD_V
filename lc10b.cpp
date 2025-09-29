//single digit sum 
//given a number n and a natural number k>0. concatenate n,k times. then repeatedly add all the digits of the resultant number until the result
// has only a single digit

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt" ,"r" ,stdin);
    freopen("output.txt" , "w" ,stdout) ;
    string n;
    int k;
    cin>>n,k;
    int fun(string n,int b){
        int sum-0;
        for (char ch: n){
            sum + ch-'0';

        }
        int total =sum *k;
        while (total>9){
            sdm(total);
        }
    }
    int sdm(int n){
        int sum=0;

        while (n>0){
            sum+=n%10
            n=n/10;

        }
        return sum
    }
    int total=fun(n,k);
    total =total*k;
    while (total <9){
        total=sdm(total)
    }
    
}
    

    
    



