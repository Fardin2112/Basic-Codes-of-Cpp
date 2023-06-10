#include<iostream>
using namespace std;

// print
        // _ _ _ 1 _ _ _
        // _ _ 1 2 1 _ _
        // _ 1 2 3 2 1 _
        // 1 2 3 4 3 2 1

int main(){

    int n;
    cin>>n;
    
    // we divide problem in 3 triangles
     int row = 1;
    while(row <= n){ 
    // print space (1st triangles)
    int space = n - row;
    while(space > 0){
        cout<<"_"<<" ";
        space--;
    }
    // print 2nd triangle
    int j = 1;
    while (j <= row){
        cout << j<<" ";
        j++;
    }
    //print 3 rd triangles 
    int start = row - 1;
    while(start){
        cout<< start<<" ";
        start--;
    }
    cout<<endl;
    row++; 
    }
    return 0;
}