// ----> 2D ARRAY
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    vector <vector <int>> mat;

    //vector <vector <int>> mat(N,vector<int>(M));  ->>>> when n and m are given

    mat={{12,13,14},{15,16,17},{18,19,20}};

    //to update an element
    mat[0][1]=100;

    //to access an element
    int value=mat[1][2];
    // taking input
    

    //inserting an element
    //mat[row].insert(mat[row].begin() + idx,val)
    mat[2].insert(mat[2].begin()+1,55) ;

    //looping in a 2D vector
    for (auto row : mat){
        for (auto num: row){
            cout<<num<<" ";
        
        }
        cout<<endl;
    }



    return 0;
}





//update an element
