#include<bits/stdc++.h>
using namespace std;

// Right & left shift
// simpley right shift shift one digit of binary number of any number
// like that left shift shift one figit of binary number on any number

// Left shift
// Ex -   5 = 101 
//        (5 >> 1) its get one digit shift is it mean 10 = 2
//        (5 >> 2) its get two digit shift then 1 = 1
// right shift
// Ex - 
//         (3 << 1) its get one digit shift its mean 11 = 110 = 6
//         (8 << 2) its get two digit shift its mean 1000 = 100000 = 32


int main (){
    
    cout <<( 5 >> 1) <<endl;
    cout <<( 5 >> 2) <<endl;
    cout <<( 3 << 1) <<endl;
    cout <<( 8 << 2) <<endl;
    return 0;
}