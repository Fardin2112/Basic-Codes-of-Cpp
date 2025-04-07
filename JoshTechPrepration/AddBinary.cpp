#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b){

    string result = "";
    int i = a.size()-1;
    int j = b.size()-1;

    int carry = 0;

    while ( i >= 0 || j >= 0 || carry){
        int sum = carry;

        if ( i >= 0) sum += a[i--] - '0'; // convert char to int '0'
        if ( j >= 0) sum += b[j--] - '0';

        result += (sum % 2) + '0'; // Append current binary digit
        carry = sum / 2;
    }
    reverse(result.begin(),result.end());
    return result;
}

int main() {
    string a = "10";
    string b = "1";
    cout<<addBinary(a,b)<<endl;

    return 0;
}