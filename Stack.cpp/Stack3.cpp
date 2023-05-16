#include <iostream>
 
using namespace std;
 
int main()
{
    int *a;
    a = new int[10];
    int end=0;
    a[0]=5;
    end++;
    a[1]=4;
    end++;
    a[2]=3;
    end++;
    a[3]=2;
    end++;
    a[4]=1;
    end++;
    int top = (a[end-1]);
    int pop=(a[end--]);
    top = (a[end-1]);
    cout << top<<endl;
    end--;
   while(end==0){
     cout << top<<endl;
     end--;

   }
 
    return 0;
}