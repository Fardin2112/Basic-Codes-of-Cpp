#include<bits/stdc++.h>
using namespace std;

// print 
//       1
//       2 3
//       4 5 6
//       7 8 9 10

int main(){

    int n;
    cin>>n;

    int row = 1;
    int cnt = 1;
    while(row <=n){
        int col = 1;
        while(col<=row){
            cout<<cnt<<" ";
            cnt++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}