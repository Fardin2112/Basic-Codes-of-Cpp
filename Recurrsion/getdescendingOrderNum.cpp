#include<bits/stdc++.h>
using namespace std ;

void getnum(int n){
    if( n<=0){
        return ;
    }
   // cout<<n<<endl;

    getnum(n-1);
     cout<<n<<endl;
}

int main(){
    int Num;
    cout<<"write Num Value:"<<endl;
    cin>>Num;

    cout<<"counting->";
    getnum(Num);

    return 0;
}