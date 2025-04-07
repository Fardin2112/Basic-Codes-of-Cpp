// leetcode 66 plus one
#include<bits/stdc++.h>
using namespace std;

vector<int>plusOne(vector<int> &vec){

    int n = vec.size();

    for( int i=n-1; i >= 0; i--){
        if (vec[i] < 9){
            ++vec[i];
            return vec;
        } else {
            vec[i] = 0;
        }
    }
    // vec.insert(vec.begin(),1); // Add one at front
    vec[0] = 1;
    vec.push_back(0);
    return vec;
}

int main(){

    vector<int> vec = {9, 9, 9};
    vector<int> ans = plusOne(vec);

    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}