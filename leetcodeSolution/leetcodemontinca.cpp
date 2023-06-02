#include<bits/stdc++.h>
using namespace std;

 bool isMonotonic(vector<int> nums) {
        int j=0;
        while(nums[j]==nums[j+1]){
            j++;
        } 
        
        if(nums[j] < nums[j+1]){           
            for(int i=0; i<nums.size()-1;i++){
                if(nums[i]>nums[i+1]){
                    return false;
                }
            }  
        }
        else if(nums[j]> nums[j+1]){
            for(int i=0; i<nums.size()-1;i++){
                if(nums[i] < nums[i+1]){
                   return false;
                }                       
            }   
        }
        return true;
    }

int main(){
     vector<int>nums={1,1,0};
     cout<<isMonotonic(nums);
}