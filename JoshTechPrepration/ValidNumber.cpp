#include<bits/stdc++.h>
using namespace std;

bool isValidNumber(string s){

    int n = s.size();
    bool seenDigit = false;
    bool seenDot = false;
    bool seenE = false;

    for (int i=0; i<n; i++){
        char c = s[i];
        
        if(isdigit(c)){
            seenDigit = true;
        }
        else if (c == '+' || c == '-'){
            // sign is allowed only at beging or just after e
            if ( i > 0 && s[i-1] != 'e' && s[i-1] != 'E'){
                return false;
            }
        } else if ( c == '.'){
            if ( seenDot || seenE)
                return false;   
            seenDot = true;    
        } else if ( c == 'e' || c == 'E'){
            if ( seenE || !seenDigit)
                return false;
            seenE = true;
            seenDigit = false;  // reset for digit after e   
        } else {
            return false; // invalid character
        }

    }

    return seenDigit;

}

int main(){

    string s = "-+3";
    cout<<isValidNumber(s)<<endl;

    return 0;
}