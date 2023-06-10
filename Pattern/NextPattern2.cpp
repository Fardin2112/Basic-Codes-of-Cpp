#include<iostream>
using namespace std;

// print
        // 1
        // 2 1
        // 3 2 1
        // 4 3 2 1

int main(){

    int n;
    cin>>n;

    int row  = 1;
    while(row <= n){
        int col = 1;
        // int cnt = row;
        while(col <= row){
            // cout << cnt <<" ";
            cout << row - col + 1 <<" ";
            // cnt--;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}