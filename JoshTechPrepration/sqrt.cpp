#include<bits/stdc++.h>
using namespace std;

int mySqrt( int x){
    if (x == 0 || x == 1){
        return x;
    }

    int left = 0, right = x, ans = 0;

    while ( left <= right){
        long long mid = left + (right - left) /2;
        long long sq = mid * mid;

        if ( sq == x){
            return mid;
        } else if ( sq < x){
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

int main(){

    int num = 9;
    cout<<mySqrt(num);

    return 0;
}