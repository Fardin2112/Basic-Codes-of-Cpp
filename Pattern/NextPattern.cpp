#include<iostream>
using namespace std;

// print
//       1 
//       2 3
//       3 4 5
//       4 5 6 7

int main(){

    int n;
    cin>>n;

    int row  = 1;
   

    while(row <= n){
        int col = 1;
        int cnt = row;
        while(col <= row){
            cout << cnt <<" ";
            cnt++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}