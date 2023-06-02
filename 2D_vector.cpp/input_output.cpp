#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int m=2;
    int ele1=0,element2=0;
    vector <vector<int>> vec;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ele1;
            vec.push_back(ele1);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<vec[i][j];
        }
        cout<<endl;
    }
    return 0;
}
