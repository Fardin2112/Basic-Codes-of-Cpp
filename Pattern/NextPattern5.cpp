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
        int col = 1; 
        int space = n - row;

       while(space > 0){
        cout << " ";
        space --;
       }
       int m = row;
       while(m > 0){
        cout << '*';
        m--;
       }
       cout<<endl;
       row++;
    }
    return 0;
}