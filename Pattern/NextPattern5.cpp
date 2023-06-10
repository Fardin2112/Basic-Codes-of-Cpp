#include<iostream>
using namespace std;

// print
        // A B C
        // A B C
        // A B C
        // A B C

int main(){

    int n;
    cin>>n;

    int row  = 1;
    while(row <= n){ 
        int space = n - row;
       while(space > 0){
        cout << " ";
        space --;
       }
       int col = row;
       while(col > 0){
        cout << '*';
        col--;
       }
       cout<<endl;
       row++;
    }
    return 0;
}