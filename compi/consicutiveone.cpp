#include<bits/stdc++.h>

using namespace std;


 int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count=0;
        int maxm=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1)
            {
                count=0;
                maxm=max(count,maxm);
            }
            else if(nums[i]==1)
                count++;
        }
        
        if(count!=0)
            maxm=max(count,maxm);
        
        
        return maxm;
    }


int main(){

vector<int> arr={1,0,1,1,0,1};

cout<<findMaxConsecutiveOnes(arr);





	return 0;
}