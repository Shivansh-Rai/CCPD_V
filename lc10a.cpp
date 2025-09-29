//functions


#include <bits/stdc++.h>
using namespace std;
int main(){
    //fun with no arg and no return type
    void f1(){
        //statement
        cout<<"hi";
    }

    //fun with arg but no return type 
    void f2(int a, int b){
        int c = a+b;
        cout<<c;

    }

    //fun with no but return
    int f3(){
        int a =2, b=3;
        int c=a+b;
        return c;

    }

    //fun with arg and return type 
    int f4(int a,int b){
        int c=a+b;
        return c;
    }
}